
#include <iostream>
using namespace std;

class heap
{
    public:
    int *arr = new int[100];
    int size;
    heap()
    {
        arr[0]=-1;
        size = 0;
    }
    
    void insert(int val)
    {
        //adding at the last
        size++;
        int index = size;
        arr[index] = val;
        
        
        // now placing it in the suitable place
        while(index>1)
        {
            int parent = index/2;
            if(arr[parent]<arr[index])
            {
                swap(arr[parent],arr[index]);
                //update the index
                index = parent;
            }
            else
            {
                return ;
            }
        }
    }
    
    
    void print()
    {
        for(int i=1;i<=size;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
    
    void deletefromHeap()
    {
        if(size==0)
        return;
        
        //swap the last with the root
        arr[1]=arr[size];
        //delete it
        size--;
        
        
        //take the root and place it at the suitable position
        int i=1;
        while(i<size)
        {
            int leftindex = 2*i;
            int rightindex = (2*i)+1;
            if(leftindex<size && arr[i]<arr[leftindex])
            {
                swap(arr[i],arr[leftindex]);
                // refer to it
                i = leftindex;
            }
            else if(rightindex<size && arr[i]<arr[rightindex])
            {
                swap(arr[i],arr[rightindex]);
                // refer to it
                i = rightindex;
            }
            else
            {
                return;
            }
        }
    }
    
    
    
};

    
    // heapify node ko suitable position pe le jata hai
    // ya max-Heap ya  min-Heap banata hai of given array
    // ismein left or right index ka perspective alag hai isliye 2*i+1 kiya hua hai
    void heapify(int arr[], int N, int i)
{
    //largest node ka index
	int largest = i; 
	int l = 2 * i+1 ; // left = 2*i + 1
	int r = 2 * i + 2; // right = 2*i + 2

    // ab check karenge ki left node or right node choti hai ya nahi 
	// If left child is larger than root
	if (l < N && arr[l] > arr[largest])
		largest = l;

	// If right child is larger than largest so far
	if (r < N && arr[r] > arr[largest])
		largest = r;


	// If largest is not root
	//agar largest update hua hai toh uski value i nahi hogi
    //     //or uski sahi place pe le jayenge
	if (largest != i) {
	     //ab hum swap karenge node ko updated largest index se
		swap(arr[i], arr[largest]);

		// Recursively heapify the affected sub-tree
		heapify(arr, N, largest);
	}
}

// Function to build a Max-Heap from the given array
void buildHeap(int arr[], int N)
{
	// Index of last non-leaf node
	int startIdx = (N / 2) - 1;

	// Perform reverse level order traversal
	// from last non-leaf node and heapify
	// each node
	for (int i = startIdx; i >= 0; i--) {
		heapify(arr, N, i);
	}
}

// A utility function to print the array
// representation of Heap
void printHeap(int arr[], int N)
{
	cout << "Array representation of Heap is:\n";

	for (int i = 0; i < N; ++i)
		cout << arr[i] << " ";
	cout << "\n";
}

void HeapSort(int  arr[], int n)
{
    int size = n-1;
    while(size>=0)
    {
        // pehle element ko last mein le jaao 
        //taki largest append hota jaaye
        swap(arr[0],arr[size]);
        // size kam karo taki modify ho
        size--;
        // modify karne ke baad max heap banao firse
        heapify(arr,n,0);
    }
    
}

int main() {
    // Write C++ code here
   heap h1;
   h1.insert(5);
   h1.insert(10);
   h1.insert(20);
   h1.insert(15);
   h1.insert(25);
   h1.print();
   h1.deletefromHeap();
    h1.print();
    // ek array bana liya 
  	int arr[] = {5,10,20,15,25};
    int N = sizeof(arr) / sizeof(arr[0]);
   // ab by default leafnode heapified hoti hai or unki quantity n/2 hoti hai
   // hum heapify karenge baaki ki bachi nodes ke liye 
  buildHeap(arr, N);
  printHeap(arr, N);
  
  HeapSort(arr,N);
  printHeap(arr, N);
  

    return 0;
}

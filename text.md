# API Setup

## Description
This project is a Node.js application that generates resumes using Adobe PDF Services SDK.

## Table of Contents
- [Installation](#installation)
- [How To Use](#UsingTheAPI)
- [Customization](#customization)
- [License](#license)

## Installation
1. Ensure that you have Node.js installed on your system.
2. Navigate to the project directory in a terminal or command prompt.
3. Run the following commands to install the required dependencies:
```
npm install
npm install express
npm install @adobe/pdfservices-node-sdk

```
4. Obtain the necessary credentials for Adobe PDF Services SDK.
5. Update the `credentials` variable in the code with your obtained credentials.
6. Make sure the input files, such as the JSON files and template files, are available in the appropriate directories as specified in the code.
7. Adjust the file paths in the code to match the location of your input files.

## UsingTheAPI
1. Run the following command to start the application:
   ```
     node main.js
   
   ```
   **NOTE** First live the server using the `main.js` code either from the terminal or run the program after installing all the dependencies.

2. The server will start running and will be listening on the specified port (default is port 3001).
3. To generate a resume using the command-line interface (CLI):
- Execute the following curl command in your terminal:
  ```
  curl -X POST -H "Content-Type: application/json" --data @SampleData.json http://localhost:3001/resume
  ```
  Note: Replace `SampleData.json` with your own resume data file or modify the content of `SampleData.json` to match your resume entries.
4. To generate a resume using the user interface (UI):
- Open a web browser and navigate to `http://localhost:3001` (or the specified port).
- Fill out the form with your resume information.
- Click on the "Submit" button.
- Wait for a few seconds while the resume is generated.
- The generated resume will be displayed or downloaded, depending on the UI implementation.

## Customization
- Customize the route handlers and logic based on your specific requirements.
- Add or modify routes, middleware, or data processing as needed.

## License
This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details.



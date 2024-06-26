# Facebook-Project

### Team Members:
Tal Ariel Ziv,
Yael Dahari

### Project Overview:
The Bloom Filter project aimed to implement a space-efficient data structure for checking the presence of URLs in a blacklist. The primary focus was on adopting a Test-Driven Development (TDD) approach to ensure code reliability.

### How to Build and Run the Docker using terminal:
Download the repository to your computer.

Open terminal at the project directory.

In order to build the docker run: "sudo docker build -t facebook-like ."
Don't forget to add the dot in the end!

Then, run: "docker run -i -t facebook-like"

Now, the program should start running, and you can insert your input :)
###  Proof of working docker image:
#### downloading docker image to my own computer:
![downloadDocker.jpg](media%2FdownloadDocker.jpg)

#### running command to run the execute file:
![runningPro.jpg](media%2FrunningPro.jpg)

#### running on docker from terminal.
![runningLatest.jpg](media%2FrunningLatest.jpg)

### Project Structure:
Here is an illustration of our project using UML:
![UML.jpg](media%2FUML.jpg)

### Workflow:

#### Jira:
Before we started working, we set up our project on Jira with a list of tasks 
essential for the project's progression.
this approach allowed us to establish a detailed project roadmap.
After that, we split up the first jobs between us, marked them as "in progress" on Jira, and got to it. This helped us stay organized and made it easy to see who was working on what.

#### Project Setup:

Created a new GitHub repository and set up the project using CMakeLists.
Both team members initialized the project on separate computers.

### Initial Tasks:

#### Tal (Developer):
Wrote the initial implementation using TDD principles.
Created basic tests for each component, ensuring they failed initially.
Implemented code to pass the tests (Green in TDD) and followed up with refactoring.

#### Yael (DevOps):
Set up Docker image and established the Git workflow for the project.

### Collaborative Refactoring:
Developed a UML for the refactored project, dividing code into smaller classes and tasks.
Tal and Yael worked on different sections, maintaining collaboration through version control.
Combined and tested the code against the initial set of basic tests.

### Merging with Main Branch:
After successful testing, merged the code with the main production branch.

### Classes and Interfaces:
#### IHash Interface:
Defines a common function for hashing, implemented by HashOne and HashTwo.
Utilizes polymorphism for interchangeable hash functions.

#### HashOne and HashTwo:
Implement the IHash interface.
Provide specific hashing algorithms for the Bloom Filter.

#### HashSet:
A map holding references to each hash function in the project.
Returns the result of hashing using a specific function.

#### BlackList:
A vector of strings holding URLs to be blacklisted.

#### BloomFilterArray:
The array storing blacklisted URLs.

#### Filter (Singleton Design Pattern):
Holds references to HashSet, BloomFilterArray, and BlackList.
Ensures a single instance of the class using static methods.

#### Input:
Handles user input for the application.

#### Runner:
Runs the application, including input handling and command execution.

#### ICommand Interface:
Defines an interface for all commands.
Implemented by AddUrlCommand and ContainsUrlCommand.

### Challenges and Solutions:
Challenges: Coordinating code integration during the refactoring phase.
Solutions: Regular communication and version control helped seamlessly merge individual contributions.

### Lessons Learned:
Emphasized the importance of TDD for code reliability.
Effective collaboration and communication are crucial for successful project outcomes.

### Conclusion:
The Bloom Filter project successfully implemented a scalable and efficient data structure, showcasing the benefits of a TDD approach and collaborative development practices.

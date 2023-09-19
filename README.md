# C++ Alarm Application

This is a C++ console-based alarm application that allows users to set and edit alarms. The application provides options for setting up to three alarms and editing them. It also includes a main menu for navigation.

## Table of Contents
- [Introduction](#introduction)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [License](#license)

## Introduction

This C++ application consists of the following components:

- **menu.h:** Header file for the main menu.
- **event.h:** Header file for event (alarm) management.
- **alarm.h:** Header file for alarm functionality.

The main function (`main.cpp`) is responsible for handling user interactions with the alarm application, including setting and editing alarms.

## Features

- Set up to three alarms with specific times.
- Edit existing alarms.
- Limit setting and editing based on previous actions.
- View the main menu and navigate through the options.

## Installation

To run this application, you need a C++ compiler installed on your system.

1. Clone or download the repository to your local machine.

2. Open a terminal or command prompt and navigate to the project directory.

For Linux/macOS:
```bash
g++ main.cpp -o alarm_app -lpthread
./alarm_app
```

For Windows (using MinGW):
```bash
g++ main.cpp -o alarm_app -lwinpthread
alarm_app.exe
```

## Usage

1. Launch the application by running the compiled executable.

2. Use the main menu to navigate through the options:
   - Option 1: Set Events (Alarms)
   - Option 2: Edit Events (Alarms)
   - Option 0: Exit the application

3. When setting or editing alarms:
   - You can set up to three alarms with specific times.
   - Alarms can be set only once and cannot be set again.
   - Use the provided options to set or edit alarms and provide details like the alarm time.

4. The application will continue running until all alarms are set or edited. After that, it will exit.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

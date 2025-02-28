# WordHunt

WordHunt is a C++ application designed to manage and search through email files. It provides a menu-driven interface for users to open email files, display a list of emails, and perform various search operations.

## Features

- **Open Email Files**: Load email files into the application.
- **Show Email List**: Display a list of loaded emails.
- **Search Emails**: Perform searches based on different criteria such as word, sender email, recipient email, subject, and period.

## Installation

To compile and run WordHunt, you need to have a C++ compiler that supports C++17. Follow the steps below to set up the project:

1. Clone the repository:
- https://github.com/amaralBruno27866/wordHunt.git

2. Navigate to the project directory:
```
cd wordhunt
```
3. Open the project in Visual Studio 2022.
4. Build the project by selecting __Build > Build Solution__.

## Usage

1. Run the application.
2. Use the main menu to navigate through the options:
    - **Open Email Files**: Load email files into the application.
    - **Show Email List**: Display a list of loaded emails.
    - **Start a New Search**: Perform searches based on different criteria.

## Code Overview

### Time.cpp

The `Time` class handles time-related operations, including reading and writing time in HH:MM format, and performing arithmetic operations on time values.

### Utils.cpp

The `Utils` class provides utility functions such as time retrieval, string comparison, and input validation.

### Menu.cpp

The `Menu` class manages the main menu and search menu, allowing users to navigate through the application's features.

## Contributing

Contributions are welcome! Please fork the repository and submit a pull request with your changes.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

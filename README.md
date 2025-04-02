# minishell - 42 School

### 🏆 Score: **105/100** (+5 for bonus)

## 👥 Group Project

This project was completed in collaboration with [oliferovych](https://github.com/oliferovych)

## 📚 About the Project

**minishell** is a shell implementation inspired by Bash. The project is designed to reinforce the understanding of process creation, execution, and inter-process communication in Unix-like systems. The goal is to develop a functional shell that can execute commands, manage environment variables, handle signals, and implement basic built-in commands.

### ⚠️ Bonus Features Disclaimer

The bonus features, such as wildcard expansion (`*`) and logical operators (`&&` and `||`), have some flaws and do not work completely as expected

### 🔧 Features

1. **Command Parsing**: Implemented a parser that tokenizes user input and constructs an abstract syntax tree (AST) for execution
2. **Command Execution**: Supported execution of all Bash commands by searching for executables in the system's `$PATH`
3. **Built-in Commands**: Implemented self-made built-in commands such as `echo`, `cd`, `pwd`, `export`, `unset`, `env`, and `exit`
4. **Signal Handling**: Managed signals like `SIGINT`, `SIGQUIT` to handle user interruptions gracefully
5. **Redirections & Pipes**: Implemented input/output redirections (`>`, `>>`, `<`, `<<`) and command piping (`|`)
6. **Bonus Features**: Added support for wildcard expansion (`*`) and logical operators (`&&` and `||`)

### 📚 What I Learned

- **Teamwork and Collaboration**: Improved skills in pair programming, and using tools like Git for collaborative development.
- **Understanding and Rebuilding Initial Bash Behaviour**: Gaining a deep understanding of how a  shell like Bash works. This involved studying its core features such as command parsing, execution flow, and managing built-in commands, and then reconstructing these behaviours from scratch

## 🚀 Usage

### 1️⃣ Clone the Repository

```bash
git clone https://github.com/t-ecker/42-Minishell.git
cd minishell
```

### 2️⃣ Compile the Program

```bash
make
```

### 3️⃣ Run minishell

```bash
./minishell
```

### 4️⃣ Use minishell

`minishell` functions like a regular Bash shell. You can execute any available command, use built-in commands, handle redirections and pipes, and leverage wildcard expansion and logical operators

## 🏁 Conclusion

**minishell** provides deep insights into how a Unix shell operates. It reinforces knowledge of system calls, process management, and shell scripting behavior

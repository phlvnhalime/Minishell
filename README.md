# Minishell
This project is the most challenging one in C at 42. When i started it, I was truly excited to dive deep into the subject. That's why I'd say "Hold on to your excitement  until the very end of the project. 

# DEFINITION FOR THIS PROJECT

A sipmlified Unix-Shell implemendation written in C language. This project replicates essential features of a standard shell like bash, including command parsing, execution, and enviroment management while handling input/output redirection and pipelines.

# 🚀 Features
Execution of built-in and external commands

Command parsing and tokenization

Quoting and escaping (single ' and double " quotes)

Redirections (>, <, >>, <<)

Pipes (|)

Environment variable management (env, $VAR)

Signal handling (Ctrl+C, Ctrl+\, etc.)

Error handling with descriptive messages

Exit status management

# 📁 Built-in Commands
echo

cd

pwd

export

unset

env

exit

# ⚙️ How It Works
Lexical Analysis (Lexer):
Splits the user input into tokens, handling quotes and special characters.

Parsing:
Organizes tokens into a syntax tree or a structured format to identify command sequences and operators.

Execution:
Executes built-in or external commands using fork/exec, sets up pipes and redirections.

Signal Handling:
Custom handlers for signals like SIGINT and SIGQUIT to emulate shell behavior.

# 🔧 Requirements
```
GCC

```

```
Make

```
Linux or Unix-based system

# 🧪 Example Usage

```
$ ./minishell
minishell$ echo "Hello, world"

```
- Output:

```
Hello, world

```

```
minishell$ export MYVAR=42
minishell$ echo $MYVAR

```
- Output:
```
42

```

```
minishell$ ls -l | grep minishell > result.txt

```
# 📚 Learning Goals
Understanding how shells work internally

Process and memory management in Unix

System calls (fork, execve, pipe, dup2, etc.)

Managing complex parsing and memory structures in C

# 📎 Bonus (if implemented)
Support for heredoc

Command history

Wildcards (*)

Logical operators (&&, ||)

Parentheses

# AI Work Log - Week 1

## Prompt 1

Asked for a high-level breakdown of the Week 1 assignment and what needed to be submitted.

### AI Guidance

The AI identified the main requirements:

- Linux development environment
- one small C CLI tool
- `-h` / `--help`
- basic error handling
- Git/GitHub repository
- `README.md`
- `AGENTS.md`
- demo artifact
- AI work log

### What I Did

Used this guidance to create the Week 1 project structure and plan the work.

---

## Prompt 2

Asked what to verify on my existing Ubuntu virtual machine.

### AI Guidance

The AI suggested checking:

```bash
gcc --version
make --version
git --version
```

and verifying that a simple C program could compile and run.

### What I Did

Verified GCC and Make were installed and working.

---

## Prompt 3

Asked for help creating the first CLI tool.

### AI Guidance

The AI suggested a small C program named `myhello` with:

- default greeting
- `-h` and `--help`
- `-n NAME` and `--name NAME`
- error handling for unknown options
- non-zero exit status on errors

### What I Did

Created:

```text
src/myhello.c
```

Implemented and tested the suggested behavior.

---

## Prompt 4

Asked how to build the program cleanly.

### AI Guidance

The AI suggested using a Makefile so the project could be built with one command.

### What I Did

Created a `Makefile` supporting:

```bash
make
make clean
```

---

## Verification

I ran the following commands:

```bash
make clean
make
./myhello
./myhello -h
./myhello --help
./myhello --name Avigoel
./myhello --bad-option
echo $?
```

### Results

- project builds successfully with `make`
- default execution works
- `-h` works
- `--help` works
- `--name` works
- invalid options print an error
- invalid options return exit status `1`

## AI Changes Accepted

Accepted:

- basic CLI structure
- help output structure
- error-path behavior
- Makefile structure
- README organization
- AGENTS.md organization

## Changes I Verified

I manually compiled and ran the program and checked both successful and error cases.

## Lesson Learned

AI was useful for scaffolding the CLI and repository structure, but each generated suggestion still needed to be built and tested manually before accepting it.
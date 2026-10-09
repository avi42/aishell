# AGENTS.md

## Project

This repository contains the AiShell project for the Linux Systems Programming course.

## Build

Use:

```bash
make
```

To clean:

```bash
make clean
```

## Current Week 1 Tool

The current CLI tool is `myhello`.

Expected behavior:

- `./myhello` prints a default greeting
- `./myhello -h` and `./myhello --help` print usage and exit successfully
- `./myhello --name NAME` prints a greeting for NAME
- invalid options print an error and return a non-zero exit status

## Development Guidelines

- Write C code compatible with GCC on Ubuntu Linux
- Compile with `-Wall -Wextra`
- Keep changes small and easy to review
- Do not add unnecessary features
- Preserve documented CLI behavior
- Test both happy-path and error-path behavior after changes
- Do not commit API keys, tokens, passwords, or other secrets

## Verification

After making changes, run:

```bash
make clean
make
./myhello --help
./myhello --name Test
./myhello --bad-option
echo $?
```
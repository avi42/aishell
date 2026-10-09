# AiShell - Week 1

This repository contains my Week 1 work for the Linux Systems Programming course.

## Current Tool

`myhello` is a small command-line program written in C.

Features:
- `-h` / `--help` displays usage information
- `-n NAME` / `--name NAME` prints a greeting
- invalid options return a non-zero exit status and show an error message

## Build

```bash
make
```

## Run

```bash
./myhello
./myhello --name Avigoel
```

## Help

```bash
./myhello -h
./myhello --help
```

## Error Example

```bash
./myhello --bad-option
echo $?
```

## Clean

```bash
make clean
```

## Week 1 Verification

Verified successfully:

- builds with `make`
- `-h` and `--help` display usage information
- normal execution works
- invalid input prints an actionable error message
- invalid input returns a non-zero exit status
## About The Project

This is a simple CLI calculator written in C. Currently this application only
supports simple calculation with additions, subtractions, multiplications, and
divisions. For the moment, it only supports sequential evaluation, which means
all operands have the same level of precedence, and that brackets aren't yet
supported. However, more functions and support will be provided in future
releases.

## Installation and Usage

1. Clone the repo
```sh
$ git clone https://github.com/Badboy-16/calculator.git
```

2. Build with Makefile
```sh
$ cd calculator && make && cd build
```

3. Run
```sh
$ ./calculate 3+1.5*1.1/4.2
```

## Contributing

Any form of contribution is welcomed!
See [CONTRIBUTING.md](CONTRIBUTING.md) for more information.

## License

Distributed under the GPL-3.0 License. See [COPYING](COPYING) for more
information.

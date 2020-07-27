./: {*/ -build/ -upstream/} doc{README.md} legal{UNLICENSE} manifest

# Don't install tests.
#
tests/: install = false

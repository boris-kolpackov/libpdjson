./: {*/ -build/ -upstream/} doc{README.md UNLICENSE} manifest

# Don't install tests.
#
tests/: install = false

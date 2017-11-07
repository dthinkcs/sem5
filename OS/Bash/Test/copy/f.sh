#!/bin/sh

echo 'define f(x) {if (x>1){return x*f(x-1)};return 1} f(6)' | bc
#!/bin/sh
# List every 10th UTF archive under <data dir> (paths relative to it, sorted),
# for test_readfile and tests/utf_oracle.py.
cd "$1" || exit 1
find . -type f | sed 's|^\./||' | LC_ALL=C sort | while read -r f; do
  head -c4 "$f" | grep -q 'UTF ' && echo "$f"
done | awk 'NR % 10 == 1'

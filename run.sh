#!/bin/bash
# Build the project
make

# Find and run the compiled App binary
EXECUTABLE=$(find Binaries/macosx-x86_64/Debug -type f -name "App" | head -n 1)

if [[ -x "$EXECUTABLE" ]]; then
    echo "Running $EXECUTABLE..."
    $EXECUTABLE
else
    echo "Executable not found! Check the build output."
fi

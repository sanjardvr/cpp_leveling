# C++ Project Starter Template

This is a little quick-start project template for C++ projects which utilise a Core/App project architecture. There are two included projects - one called _Core_, and one called _App_. [Premake](https://github.com/premake/premake-core) is used to generate project files.

Core builds into a static library and is meant to contain common code intended for use in multiple applications. App builds into an executable and links the Core static library, as well as provides an include path to Core's code.

The `Scripts/` directory contains build scripts for Windows and Linux, and the `Vendor/` directory contains Premake binaries (currently version `5.0-beta2`).

## Getting Started
1. Clone this repository or use the "Use this template" button on GitHub to quickly set up your own repository based on this template
2. `App/` and `Core/` are the two projects - you can edit the names of these folders and their contents to suit
3. The three included Premake build files are `Build.lua`, `Core/Build-Core.lua` and `App/Build-App.lua` - you can edit these to customise your build configurations, edit the names of your projects and workspace/solution, etc.
4. Open the `Scripts/` directory and run the appropriate `Setup` script to generate projects files. You can edit the setup scripts to change the type of project that is generated - out of the box they are set to Visual Studio 2022 for Windows and gmake2 for Linux.

Note that no macOS setup script is currently provided; you can duplicate the Linux script and adjust accordingly.

## Included
- Some example code (in `App/Source` and `Core/Source`) to provide a starting point and test
- Simple `.gitignore` to ignore project files and binaries
- Premake binaries for Win/Mac/Linux (`v5.0-beta2`)

## License
- UNLICENSE for this repository (see `UNLICENSE.txt` for more details)
- Premake is licensed under BSD 3-Clause (see included LICENSE.txt file for more details)

<br>
<br>
<br>
<br>

# Setup on Mac
after cloning repo, go to `./Script` and make a copy from `Setup-Linux.sh` 

change
```bash
Vendor/Binaries/Premake/Linux/premake5
```
to this
```bash
Vendor/Binaries/Premake/macOS/premake5
```  

go to root of the project and run `make` to build via Makefile

this will create a compiled App binary that you can run with 

```bash
./Binaries/macosx-x86_64/Debug/App/App
```

You can simplify build and run steps by creating new `run.sh` file
with followings :

```bash
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

```


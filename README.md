# SBC-Demo
Files for SBC SIG Make Demo 9/13/25


## Install Packages
```
sudo apt update
sudo apt install -y build-essential cmake git ninja-build

```
**_build_essential_** *installs libc, gcc, g++, make and dpkg-dev*

## Download demo files (clone repository)
```
mkdir Developer
cd Developer
git clone https://github.com/microenh/SBC-Demo

```

## make
**using default (Makefile)**
```
make

```

**using alternate**
```
make -f <Makefile2>
```

## cmake
**Generate and use Unix makefie (Makeile)**
```
mkdir build
cd build
cmake ..
make

```

**Generate and use Ninja build file (build.ninja)**
```
mkdir build_ninja
cd build_ninja
cmake -G Ninja ..
ninja

```

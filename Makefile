# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/hen/Desktop/h

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hen/Desktop/h

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	/usr/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/hen/Desktop/h/CMakeFiles /home/hen/Desktop/h/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/hen/Desktop/h/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named main

# Build rule for target.
main: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 main
.PHONY : main

# fast build rule for target.
main/fast:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/build
.PHONY : main/fast

Archer.o: Archer.cpp.o

.PHONY : Archer.o

# target to build an object file
Archer.cpp.o:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Archer.cpp.o
.PHONY : Archer.cpp.o

Archer.i: Archer.cpp.i

.PHONY : Archer.i

# target to preprocess a source file
Archer.cpp.i:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Archer.cpp.i
.PHONY : Archer.cpp.i

Archer.s: Archer.cpp.s

.PHONY : Archer.s

# target to generate assembly for a file
Archer.cpp.s:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Archer.cpp.s
.PHONY : Archer.cpp.s

Armor.o: Armor.cpp.o

.PHONY : Armor.o

# target to build an object file
Armor.cpp.o:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Armor.cpp.o
.PHONY : Armor.cpp.o

Armor.i: Armor.cpp.i

.PHONY : Armor.i

# target to preprocess a source file
Armor.cpp.i:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Armor.cpp.i
.PHONY : Armor.cpp.i

Armor.s: Armor.cpp.s

.PHONY : Armor.s

# target to generate assembly for a file
Armor.cpp.s:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Armor.cpp.s
.PHONY : Armor.cpp.s

BodyArmor.o: BodyArmor.cpp.o

.PHONY : BodyArmor.o

# target to build an object file
BodyArmor.cpp.o:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/BodyArmor.cpp.o
.PHONY : BodyArmor.cpp.o

BodyArmor.i: BodyArmor.cpp.i

.PHONY : BodyArmor.i

# target to preprocess a source file
BodyArmor.cpp.i:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/BodyArmor.cpp.i
.PHONY : BodyArmor.cpp.i

BodyArmor.s: BodyArmor.cpp.s

.PHONY : BodyArmor.s

# target to generate assembly for a file
BodyArmor.cpp.s:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/BodyArmor.cpp.s
.PHONY : BodyArmor.cpp.s

Bow.o: Bow.cpp.o

.PHONY : Bow.o

# target to build an object file
Bow.cpp.o:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Bow.cpp.o
.PHONY : Bow.cpp.o

Bow.i: Bow.cpp.i

.PHONY : Bow.i

# target to preprocess a source file
Bow.cpp.i:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Bow.cpp.i
.PHONY : Bow.cpp.i

Bow.s: Bow.cpp.s

.PHONY : Bow.s

# target to generate assembly for a file
Bow.cpp.s:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Bow.cpp.s
.PHONY : Bow.cpp.s

Console.o: Console.cpp.o

.PHONY : Console.o

# target to build an object file
Console.cpp.o:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Console.cpp.o
.PHONY : Console.cpp.o

Console.i: Console.cpp.i

.PHONY : Console.i

# target to preprocess a source file
Console.cpp.i:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Console.cpp.i
.PHONY : Console.cpp.i

Console.s: Console.cpp.s

.PHONY : Console.s

# target to generate assembly for a file
Console.cpp.s:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Console.cpp.s
.PHONY : Console.cpp.s

Crossbow.o: Crossbow.cpp.o

.PHONY : Crossbow.o

# target to build an object file
Crossbow.cpp.o:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Crossbow.cpp.o
.PHONY : Crossbow.cpp.o

Crossbow.i: Crossbow.cpp.i

.PHONY : Crossbow.i

# target to preprocess a source file
Crossbow.cpp.i:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Crossbow.cpp.i
.PHONY : Crossbow.cpp.i

Crossbow.s: Crossbow.cpp.s

.PHONY : Crossbow.s

# target to generate assembly for a file
Crossbow.cpp.s:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Crossbow.cpp.s
.PHONY : Crossbow.cpp.s

Elite.o: Elite.cpp.o

.PHONY : Elite.o

# target to build an object file
Elite.cpp.o:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Elite.cpp.o
.PHONY : Elite.cpp.o

Elite.i: Elite.cpp.i

.PHONY : Elite.i

# target to preprocess a source file
Elite.cpp.i:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Elite.cpp.i
.PHONY : Elite.cpp.i

Elite.s: Elite.cpp.s

.PHONY : Elite.s

# target to generate assembly for a file
Elite.cpp.s:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Elite.cpp.s
.PHONY : Elite.cpp.s

Enemy.o: Enemy.cpp.o

.PHONY : Enemy.o

# target to build an object file
Enemy.cpp.o:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Enemy.cpp.o
.PHONY : Enemy.cpp.o

Enemy.i: Enemy.cpp.i

.PHONY : Enemy.i

# target to preprocess a source file
Enemy.cpp.i:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Enemy.cpp.i
.PHONY : Enemy.cpp.i

Enemy.s: Enemy.cpp.s

.PHONY : Enemy.s

# target to generate assembly for a file
Enemy.cpp.s:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Enemy.cpp.s
.PHONY : Enemy.cpp.s

Game.o: Game.cpp.o

.PHONY : Game.o

# target to build an object file
Game.cpp.o:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Game.cpp.o
.PHONY : Game.cpp.o

Game.i: Game.cpp.i

.PHONY : Game.i

# target to preprocess a source file
Game.cpp.i:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Game.cpp.i
.PHONY : Game.cpp.i

Game.s: Game.cpp.s

.PHONY : Game.s

# target to generate assembly for a file
Game.cpp.s:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Game.cpp.s
.PHONY : Game.cpp.s

Hammer.o: Hammer.cpp.o

.PHONY : Hammer.o

# target to build an object file
Hammer.cpp.o:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Hammer.cpp.o
.PHONY : Hammer.cpp.o

Hammer.i: Hammer.cpp.i

.PHONY : Hammer.i

# target to preprocess a source file
Hammer.cpp.i:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Hammer.cpp.i
.PHONY : Hammer.cpp.i

Hammer.s: Hammer.cpp.s

.PHONY : Hammer.s

# target to generate assembly for a file
Hammer.cpp.s:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Hammer.cpp.s
.PHONY : Hammer.cpp.s

Hero.o: Hero.cpp.o

.PHONY : Hero.o

# target to build an object file
Hero.cpp.o:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Hero.cpp.o
.PHONY : Hero.cpp.o

Hero.i: Hero.cpp.i

.PHONY : Hero.i

# target to preprocess a source file
Hero.cpp.i:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Hero.cpp.i
.PHONY : Hero.cpp.i

Hero.s: Hero.cpp.s

.PHONY : Hero.s

# target to generate assembly for a file
Hero.cpp.s:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Hero.cpp.s
.PHONY : Hero.cpp.s

Item.o: Item.cpp.o

.PHONY : Item.o

# target to build an object file
Item.cpp.o:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Item.cpp.o
.PHONY : Item.cpp.o

Item.i: Item.cpp.i

.PHONY : Item.i

# target to preprocess a source file
Item.cpp.i:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Item.cpp.i
.PHONY : Item.cpp.i

Item.s: Item.cpp.s

.PHONY : Item.s

# target to generate assembly for a file
Item.cpp.s:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Item.cpp.s
.PHONY : Item.cpp.s

OneHanded.o: OneHanded.cpp.o

.PHONY : OneHanded.o

# target to build an object file
OneHanded.cpp.o:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/OneHanded.cpp.o
.PHONY : OneHanded.cpp.o

OneHanded.i: OneHanded.cpp.i

.PHONY : OneHanded.i

# target to preprocess a source file
OneHanded.cpp.i:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/OneHanded.cpp.i
.PHONY : OneHanded.cpp.i

OneHanded.s: OneHanded.cpp.s

.PHONY : OneHanded.s

# target to generate assembly for a file
OneHanded.cpp.s:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/OneHanded.cpp.s
.PHONY : OneHanded.cpp.s

Player.o: Player.cpp.o

.PHONY : Player.o

# target to build an object file
Player.cpp.o:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Player.cpp.o
.PHONY : Player.cpp.o

Player.i: Player.cpp.i

.PHONY : Player.i

# target to preprocess a source file
Player.cpp.i:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Player.cpp.i
.PHONY : Player.cpp.i

Player.s: Player.cpp.s

.PHONY : Player.s

# target to generate assembly for a file
Player.cpp.s:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Player.cpp.s
.PHONY : Player.cpp.s

Point2d.o: Point2d.cpp.o

.PHONY : Point2d.o

# target to build an object file
Point2d.cpp.o:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Point2d.cpp.o
.PHONY : Point2d.cpp.o

Point2d.i: Point2d.cpp.i

.PHONY : Point2d.i

# target to preprocess a source file
Point2d.cpp.i:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Point2d.cpp.i
.PHONY : Point2d.cpp.i

Point2d.s: Point2d.cpp.s

.PHONY : Point2d.s

# target to generate assembly for a file
Point2d.cpp.s:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Point2d.cpp.s
.PHONY : Point2d.cpp.s

Potion.o: Potion.cpp.o

.PHONY : Potion.o

# target to build an object file
Potion.cpp.o:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Potion.cpp.o
.PHONY : Potion.cpp.o

Potion.i: Potion.cpp.i

.PHONY : Potion.i

# target to preprocess a source file
Potion.cpp.i:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Potion.cpp.i
.PHONY : Potion.cpp.i

Potion.s: Potion.cpp.s

.PHONY : Potion.s

# target to generate assembly for a file
Potion.cpp.s:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Potion.cpp.s
.PHONY : Potion.cpp.s

ShieldArmor.o: ShieldArmor.cpp.o

.PHONY : ShieldArmor.o

# target to build an object file
ShieldArmor.cpp.o:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/ShieldArmor.cpp.o
.PHONY : ShieldArmor.cpp.o

ShieldArmor.i: ShieldArmor.cpp.i

.PHONY : ShieldArmor.i

# target to preprocess a source file
ShieldArmor.cpp.i:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/ShieldArmor.cpp.i
.PHONY : ShieldArmor.cpp.i

ShieldArmor.s: ShieldArmor.cpp.s

.PHONY : ShieldArmor.s

# target to generate assembly for a file
ShieldArmor.cpp.s:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/ShieldArmor.cpp.s
.PHONY : ShieldArmor.cpp.s

Staff.o: Staff.cpp.o

.PHONY : Staff.o

# target to build an object file
Staff.cpp.o:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Staff.cpp.o
.PHONY : Staff.cpp.o

Staff.i: Staff.cpp.i

.PHONY : Staff.i

# target to preprocess a source file
Staff.cpp.i:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Staff.cpp.i
.PHONY : Staff.cpp.i

Staff.s: Staff.cpp.s

.PHONY : Staff.s

# target to generate assembly for a file
Staff.cpp.s:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Staff.cpp.s
.PHONY : Staff.cpp.s

Sword.o: Sword.cpp.o

.PHONY : Sword.o

# target to build an object file
Sword.cpp.o:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Sword.cpp.o
.PHONY : Sword.cpp.o

Sword.i: Sword.cpp.i

.PHONY : Sword.i

# target to preprocess a source file
Sword.cpp.i:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Sword.cpp.i
.PHONY : Sword.cpp.i

Sword.s: Sword.cpp.s

.PHONY : Sword.s

# target to generate assembly for a file
Sword.cpp.s:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Sword.cpp.s
.PHONY : Sword.cpp.s

TwoHanded.o: TwoHanded.cpp.o

.PHONY : TwoHanded.o

# target to build an object file
TwoHanded.cpp.o:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/TwoHanded.cpp.o
.PHONY : TwoHanded.cpp.o

TwoHanded.i: TwoHanded.cpp.i

.PHONY : TwoHanded.i

# target to preprocess a source file
TwoHanded.cpp.i:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/TwoHanded.cpp.i
.PHONY : TwoHanded.cpp.i

TwoHanded.s: TwoHanded.cpp.s

.PHONY : TwoHanded.s

# target to generate assembly for a file
TwoHanded.cpp.s:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/TwoHanded.cpp.s
.PHONY : TwoHanded.cpp.s

Wand.o: Wand.cpp.o

.PHONY : Wand.o

# target to build an object file
Wand.cpp.o:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Wand.cpp.o
.PHONY : Wand.cpp.o

Wand.i: Wand.cpp.i

.PHONY : Wand.i

# target to preprocess a source file
Wand.cpp.i:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Wand.cpp.i
.PHONY : Wand.cpp.i

Wand.s: Wand.cpp.s

.PHONY : Wand.s

# target to generate assembly for a file
Wand.cpp.s:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Wand.cpp.s
.PHONY : Wand.cpp.s

Warrior.o: Warrior.cpp.o

.PHONY : Warrior.o

# target to build an object file
Warrior.cpp.o:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Warrior.cpp.o
.PHONY : Warrior.cpp.o

Warrior.i: Warrior.cpp.i

.PHONY : Warrior.i

# target to preprocess a source file
Warrior.cpp.i:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Warrior.cpp.i
.PHONY : Warrior.cpp.i

Warrior.s: Warrior.cpp.s

.PHONY : Warrior.s

# target to generate assembly for a file
Warrior.cpp.s:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Warrior.cpp.s
.PHONY : Warrior.cpp.s

Weapon.o: Weapon.cpp.o

.PHONY : Weapon.o

# target to build an object file
Weapon.cpp.o:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Weapon.cpp.o
.PHONY : Weapon.cpp.o

Weapon.i: Weapon.cpp.i

.PHONY : Weapon.i

# target to preprocess a source file
Weapon.cpp.i:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Weapon.cpp.i
.PHONY : Weapon.cpp.i

Weapon.s: Weapon.cpp.s

.PHONY : Weapon.s

# target to generate assembly for a file
Weapon.cpp.s:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Weapon.cpp.s
.PHONY : Weapon.cpp.s

Wizard.o: Wizard.cpp.o

.PHONY : Wizard.o

# target to build an object file
Wizard.cpp.o:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Wizard.cpp.o
.PHONY : Wizard.cpp.o

Wizard.i: Wizard.cpp.i

.PHONY : Wizard.i

# target to preprocess a source file
Wizard.cpp.i:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Wizard.cpp.i
.PHONY : Wizard.cpp.i

Wizard.s: Wizard.cpp.s

.PHONY : Wizard.s

# target to generate assembly for a file
Wizard.cpp.s:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Wizard.cpp.s
.PHONY : Wizard.cpp.s

main.o: main.cpp.o

.PHONY : main.o

# target to build an object file
main.cpp.o:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/main.cpp.o
.PHONY : main.cpp.o

main.i: main.cpp.i

.PHONY : main.i

# target to preprocess a source file
main.cpp.i:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/main.cpp.i
.PHONY : main.cpp.i

main.s: main.cpp.s

.PHONY : main.s

# target to generate assembly for a file
main.cpp.s:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/main.cpp.s
.PHONY : main.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... rebuild_cache"
	@echo "... edit_cache"
	@echo "... main"
	@echo "... Archer.o"
	@echo "... Archer.i"
	@echo "... Archer.s"
	@echo "... Armor.o"
	@echo "... Armor.i"
	@echo "... Armor.s"
	@echo "... BodyArmor.o"
	@echo "... BodyArmor.i"
	@echo "... BodyArmor.s"
	@echo "... Bow.o"
	@echo "... Bow.i"
	@echo "... Bow.s"
	@echo "... Console.o"
	@echo "... Console.i"
	@echo "... Console.s"
	@echo "... Crossbow.o"
	@echo "... Crossbow.i"
	@echo "... Crossbow.s"
	@echo "... Elite.o"
	@echo "... Elite.i"
	@echo "... Elite.s"
	@echo "... Enemy.o"
	@echo "... Enemy.i"
	@echo "... Enemy.s"
	@echo "... Game.o"
	@echo "... Game.i"
	@echo "... Game.s"
	@echo "... Hammer.o"
	@echo "... Hammer.i"
	@echo "... Hammer.s"
	@echo "... Hero.o"
	@echo "... Hero.i"
	@echo "... Hero.s"
	@echo "... Item.o"
	@echo "... Item.i"
	@echo "... Item.s"
	@echo "... OneHanded.o"
	@echo "... OneHanded.i"
	@echo "... OneHanded.s"
	@echo "... Player.o"
	@echo "... Player.i"
	@echo "... Player.s"
	@echo "... Point2d.o"
	@echo "... Point2d.i"
	@echo "... Point2d.s"
	@echo "... Potion.o"
	@echo "... Potion.i"
	@echo "... Potion.s"
	@echo "... ShieldArmor.o"
	@echo "... ShieldArmor.i"
	@echo "... ShieldArmor.s"
	@echo "... Staff.o"
	@echo "... Staff.i"
	@echo "... Staff.s"
	@echo "... Sword.o"
	@echo "... Sword.i"
	@echo "... Sword.s"
	@echo "... TwoHanded.o"
	@echo "... TwoHanded.i"
	@echo "... TwoHanded.s"
	@echo "... Wand.o"
	@echo "... Wand.i"
	@echo "... Wand.s"
	@echo "... Warrior.o"
	@echo "... Warrior.i"
	@echo "... Warrior.s"
	@echo "... Weapon.o"
	@echo "... Weapon.i"
	@echo "... Weapon.s"
	@echo "... Wizard.o"
	@echo "... Wizard.i"
	@echo "... Wizard.s"
	@echo "... main.o"
	@echo "... main.i"
	@echo "... main.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system


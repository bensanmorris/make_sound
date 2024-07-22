# make sound

Write an application which iterates a container of objects calling a MakeSound() method for
each. There should 3 objects in the container when it is iterated, an instance of three classes
called Dog, Sheep and Lion. The MakeSound() method should print to screen “Woof”, “Baaa”
and “Roar” respectively for each of the three classes.
```
(windows)
cmake -B build -G "Visual Studio 16 2019" .
cd build
cmake --build . --config Release
.\build\Release\make_sound.exe

(linux)
cmake -B build -G "Unix Makefiles" .
cd build
cmake --build . --config Release
.\build\make_sound
```


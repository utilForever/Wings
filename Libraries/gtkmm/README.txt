This is a complete set of libraries to build gtkmm3 (version 3.16.0) applications on Windows 10 x86
with Visual Studio 2015
The package additionaly includes boost and crypto++ libraries.

All of the libraries are as recent as possible, all of them built with Visual Studio 2015 (msvc-140).

The build type is "Debug x86", that means you can use these libraries to build debug x86 gtkmm3 configuration on
Windows 10. (but it should also work on older windows)

The package also includes test project which you use to test the package.

There are 3 possible ways to setup your visual Studio with this package:

OPTION 1: extract the contents of this package into D:\GitHub\Visual-Studio-gtkmm\output\v140\Debug\Win32\
	Once done you can download my whole repository where you will find Visual Studio project templates and use them to
	create new projects without the need to setup anything (see readme in templates solution for details)
	NOTE: you need to download all because of VS properties, see wiki on GitHub for details on extration path!.

OPTION 2: extract this package into C:\ so that you end up with C:\Visual-Studio-gtkmm\ and use provided property sheet
	 Debug-x64.props to create and build new projects.
	This property sheet defines macros (DW and EW) you can use them before and after gtkmm header inclusions to
	get rid of warnings not related to your code.

OPTION3: is to extract into some place that does not contain spaces and setup your compiler to use these libraries.

I'm recommending you to use option 1 because project templates are set up in a way to make compile time and Visual Studio
intellisense very fast by using PCH, also creating new projects will be as easy as File > New > Project and that's it.
to understand what I mean see this:
https://raw.githubusercontent.com/codekiddy2/Visual-Studio-gtkmm/msvc-140/readme/images/gtkmm%20visual%20studio.png

warning from library headers will be disabled by using OPTION 1, while in option 2 or 3 you'll will still see silly warnings
from time to time, and you will need to disable them manualy as told before, by using DW and EW macros
as well to optimize inellisense in order to have comfort condig.

if you choose option 3 you're supposed to know how liker and compiler setup works.

Which ever option your choose make sure the \bin\ path of the package is in your PATH by using control panel in Windows,
and that you have no other instances of gtkmm or GTK+ in PATH.
You also need to edit "Debug-x86.props" and under User Macros provide a correct path to where you extracted this package!
By default it is set to "C:\Visual-Studio-gtkmm"
You might also need to edit preprocessor macros (ex. targeted windows)

Additionaly you can update icon cache and use other GTK+ tools from bin folder to update caches.
also run gtk3 demo and gtkmm3 demo app from bin folder to ensure everything work as expected.

That's it, you can now build gtkmm 3.16, boost 1.61, crypto++ 5.6.3 and GTK+ 3.16.7 with Visual Studio 2015!


You can check out my Git Repository with complete Visual Studio projects and solutions if you want to build
them for newer Visual Studio or other configuration type:

https://github.com/codekiddy2/Visual-Studio-gtkmm

I've put a lot of work into this project and you should be able to compile everything in matter of few houres.

I also made a wiki on GitHub which explains a lot of things in detail on how to build on your own.
there is also a step by step tutorial on how to install latest gtkmm3 for other IDE's and GCC here:

http://gtkmm-installation.blogspot.com/

Good luck!
~codekiddy
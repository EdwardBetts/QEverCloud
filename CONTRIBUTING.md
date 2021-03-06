# How to contribute

Contributions to QEverCloud are warmly welcome. However, in order to ensure the successful adoption of your contributions, please refer to this guide.

## Issues

This section explains how to create and fill GitHub issues in a way most helpful to the developers and the community at large.

### How to report a bug

If you think you have found a bug in QEverCloud, you are kindly encouraged to create an issue and describe the bug you have encountered. However, before doing that please look through the existing [open](https://github.com/d1vanov/QEverCloud/issues) and [closed](https://github.com/d1vanov/QEverCloud/issues?q=is%3Aissue+is%3Aclosed) issues to see whether the bug you've encountered has already been reported or maybe even fixed in some version of QEverCloud. If you don't see anything like what you experience, please proceed to creating a new issue.

If you are using QEverCloud in some application and it crashes or throws the exception and it seems the reason of it is not your application but QEverCloud library itself, please provide some context for troubleshooting: for example, run your application under the debugger and provide the backtrace/call stack on crash or exception or at least a part of the backtrace/call stack containing the calls of QEverCloud's methods. See some examples how to do it:
* [with gdb](http://www.cs.toronto.edu/~krueger/csc209h/tut/gdb_tutorial.html)
* [with Visual Studio on Windows](http://www.codeproject.com/Articles/79508/Mastering-Debugging-in-Visual-Studio-2010-A-Beginn#heading0031)

If you don't have a crash or exception but have some method of QEverCloud returning an unexpected result to your application, please provide the context: which method returns wrong result, which parameters do you pass to the method, what do you expect to get, what you actually get. Probably also describe the sequence of previous calls to QEverCloud methods - if the context is, for example, the implementation of a full or partial synchronization of Evernote account data with Evernote servers.

### How to contribute a bugfix

If you have not only found a bug but have also identified its reason and would like to contribute a bugfix, please note the following:

* `master` branch is meant to contain a current stable version of QEverCloud. Small and safe bugfixes are ok to land in `master`. More complicated bugfixes changing a lot of code or breaking the API/ABI compatibility are not indended for `master`. Instead, please contribute them to `development` branch.
* Make sure the changes you propose agree with the [coding style](CodingStyle.md) of the project. If they don't but the bugfix you are contributing is good enough, there's a chance that your contribution would be accepted but the coding style would have to be cleaned up after that. You are encouraged to be a good citizen and not force others to clean up after you.
* Make sure you don't attempt to change the code resided in `generated` folders, either for header files or cpp files: the code in those folders was [automatically generated](https://github.com/d1vanov/QEverCloudGenerator) from [Thrift IDL](https://github.com/evernote/evernote-thrift) files. So any manual changes there would be overwritten by the next re-generation from Thrift IDL files. Please see whether the fix you propose could belong to Thrift IDL files themselves - if it's a typo within some Doxygen comment, it can definitely be fixed in the Thrift IDL files with the corresponding QEverCloud code regenerated from corrected Thrift IDL files. Otherwise the fix might need to be applied to [the generator](https://github.com/d1vanov/QEverCloudGenerator) of QEverCloud code from Thrift IDL files.

### How to suggest a new feature or improvement

If you have a new feature or improvement suggestion, please make sure you describe it with the appropriate level of detail and also describe at least one more or less realistic use case dictating the necessity of the change.

If you'd like to implement the feature or improvement you're suggesting yourself, please also mention that and briefly describe your implementation ideas. Like

> I think it could be solved by adding method B to class A

or

> A good way to get it done seems to introduce class C which would handle D

Once the implementation plan is agreed, it is safe to start coding it with the knowledge that the code won't contradict the project's vision and would be accepted when ready. Please don't start the actual work on the new features before the vision agreement is achieved - it can lead to problems with code acceptance to QEverCloud.

When working on a feature or improvement implementation, please comply with the [coding style](CodingStyle.md) of the project.

All the new features and major improvements should be contributed to `development` branch, not `master`.

### What changes are generally NOT approved

- Breaking backward compatibility without a really good reason for that.
- The introduction of dependencies on strictly the latest versions of anything, like, on some feature existing only in the latest version of Qt.
- The direct unconditional usage of C++11/14/17 features breaking the build with older compilers not supporting them (see the [coding style](CodingStyle.md) doc for more info on that)
- The breakage of building/working with Qt4

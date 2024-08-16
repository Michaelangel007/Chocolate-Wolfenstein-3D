#pragma once

// See:https://dev.to/yumetodo/list-of-mscver-and-mscfullver-8nd
#if _MSC_VER >= 1800 // MSVC 13.0
    // Shutup MSVC about "archaic" C Run-Time Warnings
    //
    // Normally we would do ...
    //
    //    #define close   _close
    //    #define itoa    _itoa
    //    #define lseek   _lseek
    //    #define open    _open
    //    #define read    _read
    //    #define unlink  _unlink
    //    #define write   _write
    //
    // ... but MSVC 2013 still complains.
    // We have two way to deal with this spam.

    // 1.. Turn off the warning via a pragma:
    // 
    //     #pragma message("Turning off C4996")
    //     #pragma warning(disable : 4996)
    //
    // or
    //
    // Set _CRT_SECURE_NO_WARNINGS and _CRT_NONSTDC_NO_DEPRECATE
    #define _CRT_SECURE_NO_WARNINGS   1
    #define _CRT_NONSTDC_NO_DEPRECATE 1

// Note: There is also _CRT_SECURE_NO_DEPRECATE
//   #define _CRT_SECURE_NO_DEPRECATE
//
// Note: suppress vs disable
//   suppress still shows the warning
//   disables ALL of the instances
//
//  #pragma warning(suppress : 4996)
//  #pragma warning(disable : 4996)
#endif // MSVC 13.0

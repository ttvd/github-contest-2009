//
// GCLog.h
// GitHub Contest
//
// Created by ttvd on 08/07/09.
// Copyright 2009 Mykola Konyk. All rights reserved.
//
// Distributed under Boost Software License 1.0 (BSL1.0)
// http://www.boost.org/LICENSE_1_0.txt
//

#import <Foundation/Foundation.h>


//--
@interface GCLog : NSObject 
{
    @private
}


+ (void)                    setConsoleFile: (NSFileHandle*) file;

+ (void)                    log;
+ (void)                    log: (NSString*) string, ...;

@end

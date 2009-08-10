//
// GCScore.h
// GitHub Contest
//
// Created by ttvd on 08/07/09.
// Copyright 2009 Mykola Konyk. All rights reserved.
//
// Distributed under Boost Software License 1.0 (BSL1.0)
// http://www.boost.org/LICENSE_1_0.txt
//

// [rad] This is a private header.
#ifndef GITHUB_CONTEST_PRIVATE_HEADER

    #error "GCScore.h is a private header, import GCScores.h instead."
#endif


#import <Foundation/Foundation.h>


//--
@class GCRepository;


//--
@interface GCScore : NSObject 
{
    @private
    
    NSInteger               value_;
    
    GCRepository*           repository_;
}


- (id)                      initWithRepository: (GCRepository*) repository;

- (void)                    reset;
- (void)                    incrementBy: (NSInteger) value;

- (NSInteger)               value;
- (void)                    setValue: (NSInteger) value;
- (void)                    setInvalidValue;

- (GCRepository*)           repository;

- (NSComparisonResult)      compareBasedOnValues: (GCScore*) other;


@end

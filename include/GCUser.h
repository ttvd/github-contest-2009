//
// GCUser.h
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
@class GCRepository;
@class GCResults;


//--
@interface GCUser : NSObject 
{
    @private
    
    NSNumber*               number_;
    NSMutableSet*           following_;
    
    GCResults*              results_;
}


- (id)                      initWithNumber: (NSNumber*) number;

- (NSNumber*)               number;

- (void)                    addRepository: (GCRepository*) repository;

- (NSComparisonResult)      compareBasedOnNumbers: (GCUser*) other;

- (NSMutableSet*)           following;

- (GCResults*)              results;


@end

//
// GCResults.h
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
@class GCUser;
@class GCRepository;


//--
@interface GCResults : NSObject 
{
    @private
    
    NSMutableArray*         repositories_;
    GCUser*                 user_;    
}


- (void)                    setUser: (GCUser*) user;

- (void)                    addRepository: (GCRepository*) repository;

- (NSString*)               string;


@end

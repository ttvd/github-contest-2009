//
// GCScoreThread.h
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
@class GCDataset;


//--
@interface GCScoreThread : NSThread 
{
    @private
    
    NSInteger               number_;
    NSInteger               threadCount_;
    
    NSMutableDictionary*    repositories_;
    NSMutableDictionary*    repositoriesByAuthor_;
    NSMutableDictionary*    testUsers_;
    
    NSArray*                repositoriesSortedByFollowers_;
    
    GCDataset*              dataset_;
}

- (id)                      initWithNumber: (NSInteger) number
                            threadCount: (NSInteger) threadCount;
                            
- (void)                    setRepositories: (NSMutableDictionary*) repositories;
- (void)                    setTestUsers: (NSMutableDictionary*) testUsers;
- (void)                    setDataset: (GCDataset*) dataset;
- (void)                    setRepositoriesByAuthor: (NSMutableDictionary*) repositoriesByUsers;
- (void)                    setRepositoriesSortedByFollowers: (NSArray*) repositoriesSortedByFollowers;


@end

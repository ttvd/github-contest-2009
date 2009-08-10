//
// GCDataset.h
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
@interface GCDataset : NSObject 
{
    @private    

    NSMutableDictionary*    users_;    
    NSMutableDictionary*    testUsers_;
    NSMutableDictionary*    repositories_;
    NSMutableDictionary*    repositoriesByAuthor_;
    
    NSArray*                repositoriesSortedByFollowers_;
    
    NSMutableSet*           languages_;
    
    NSLock*                 lockCallback_;
    
    NSInteger               numberOfCores_;
    NSMutableArray*         threadPool_;    
}


- (void)                    loadRepositories;
- (void)                    loadLanguages;
- (void)                    loadData;
- (void)                    loadTests;

- (void)                    computeScores;

- (void)                    computedResultsCallback;                            

@end

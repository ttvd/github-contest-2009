//
// GCScores.h
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
@class GCResults;


//--
@interface GCScores : NSObject 
{
    @private
    
    NSMutableDictionary*    scores_;
    NSArray*                repositoryNumbers_;
}


- (id)                      initWithRepositories: (NSMutableDictionary*) repositories; 

- (void)                    reset;

- (void)                    incrementScoreFor: (NSNumber*) number
                            by: (NSInteger) value;
                            
- (NSInteger)               scoreFor: (NSNumber*) number;

- (void)                    storeIn: (GCResults*) results 
                            top: (NSInteger) top;

@end

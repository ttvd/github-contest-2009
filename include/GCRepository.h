//
// GCRepository.h
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


//--
@interface GCRepository : NSObject 
{
    @private
    
    NSNumber*               number_;
    NSNumber*               parent_;
    GCRepository*           parentRepository_;
	
    NSString*               author_;
    NSString*               name_;
    
    NSString*               description_;
    NSString*               homepage_;
	
    NSDate*                 created_;
    
    NSMutableDictionary*    languages_;
    NSInteger               totalLineCount_;
    
    NSMutableSet*           followers_;
    NSMutableSet*           keywords_;
    
    NSMutableSet*           forks_;
}

- (id)                      initWithNumber: (NSNumber*) number
                            parent: (NSNumber*) parent
                            created: (NSDate*) created;       
                            
- (NSNumber*)               number;
- (NSNumber*)               parent;

- (GCRepository*)           parentRepository;
- (void)                    setParentRepository: (GCRepository*) parentRepository;
                            
- (void)                    setAuthor: (NSString*) author;
- (NSString*)               author;

- (void)                    setName: (NSString*) name;
- (NSString*)               name;

- (void)                    setDescription: (NSString*) description;
- (NSString*)               descriptionPage;

- (void)                    setHomepage: (NSString*) homepage;
- (NSString*)               homepage;

- (NSSet*)                  followers;

- (NSSet*)                  forks;
- (void)                    addFork: (GCRepository*) repository;

- (void)                    setLanguage: (NSString*) language
                            withNumberOfLines: (NSNumber*) count;
                            
- (void)                    addUser: (GCUser*) user;

- (NSComparisonResult)      compareBasedOnNumbers: (GCRepository*) other;
- (NSComparisonResult)      compareBasedOnParents: (GCRepository*) other;
- (NSComparisonResult)      compareBasedOnNumberOfFollowers: (GCRepository*) other;


@end

//
//  TMWActorSearchResults.h
//  ThatMovieWith
//
//  Created by johnrhickey on 4/24/14.
//  Copyright (c) 2014 Jay Hickey. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TMWActorSearchResults : NSObject

@property(nonatomic, copy, readonly) NSMutableArray *results;
@property(nonatomic, copy, readonly) NSArray *names;
@property(nonatomic, copy, readonly) NSArray *lowResImageEndingURLs;

- (void)removeAllObjects;

- (instancetype)initActorSearchResultsWithResults:(NSArray *)results;

@end

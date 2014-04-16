//
//  TMWActors.h
//  ThatMovieWith
//
//  Created by johnrhickey on 4/16/14.
//  Copyright (c) 2014 Jay Hickey. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TMWActors : NSObject

- (NSArray *)retrieveActorDataResultsForQuery:(NSString *)query;
- (NSArray *)retrieveActorNamesForActorDataResults:(NSArray *)dataResults;
- (UIImage *)retriveActorImagesForActorDataResults:(NSString *)actor;

@end

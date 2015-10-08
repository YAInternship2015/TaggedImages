//
//  TIDataSource.h
//  TaggedImages
//
//  Created by Андрей on 10/8/15.
//  Copyright © 2015 AndrewPetrov. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
@class TIInstagramPost;

@interface TIDataSource : NSObject <NSFetchedResultsControllerDelegate>

- (NSInteger)postCount;
- (TIInstagramPost *)instagramPostAtIndex:(NSInteger)index;
- (NSInteger)tagsCount;
- (NSArray *)instagramPosts;

@end

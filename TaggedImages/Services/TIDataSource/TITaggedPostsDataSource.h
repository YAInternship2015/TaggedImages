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
@class TIInstagramPostsPaginationInfo;
@protocol TITaggedPostsDataSourceProtocol;

@interface TITaggedPostsDataSource : NSObject <NSFetchedResultsControllerDelegate>

@property (nonatomic, strong) NSString *tag;
@property (nonatomic, strong) TIInstagramPostsPaginationInfo *postsPaginationInfo;
@property (nonatomic, weak) id<TITaggedPostsDataSourceProtocol> delegate;

- (NSInteger)postCount;
- (TIInstagramPost *)postAtIndex:(NSInteger)index;
- (NSArray *)instagramPosts;
- (void)requestRecentPost;

@end

@protocol TITaggedPostsDataSourceProtocol

- (void)dataSourceIsUpdated;

@end
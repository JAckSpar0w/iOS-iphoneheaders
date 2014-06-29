/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:32:47 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <gamed/GKExpiringCacheObject.h>

@class GKLeaderboardCacheObject;

@interface GKLeaderboardScoreRangeCacheObject : GKExpiringCacheObject

@property (assign,nonatomic,@dynamic) long long startRank; 
@property (assign,nonatomic,@dynamic) long long endRank; 
@property (assign,nonatomic,@dynamic) long long maxRank; 
@property (assign,nonatomic,@dynamic) int timeScope; 
@property (assign,nonatomic,@dynamic) BOOL friendsOnly; 
@property (nonatomic,@dynamic,retain) GKLeaderboardCacheObject * leaderboard; 
+(id)entityName;
-(void)updateWithServerRepresentation:(id)arg1 expirationDate:(id)arg2 ;
@end

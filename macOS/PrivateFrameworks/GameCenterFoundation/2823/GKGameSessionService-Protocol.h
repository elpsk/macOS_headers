//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSString;

@protocol GKGameSessionService <NSObject>
- (oneway void)sendMessageForSessionWithID:(NSString *)arg1 withLocalizedFormatKey:(NSString *)arg2 arguments:(NSArray *)arg3 userMessage:(NSString *)arg4 data:(NSData *)arg5 recipientIDs:(NSArray *)arg6 badgePlayers:(BOOL)arg7 handler:(void (^)(GKGameSession *, NSError *))arg8;
- (oneway void)setBadged:(BOOL)arg1 forPlayerIDs:(NSArray *)arg2 forSessionWithIdentifier:(NSString *)arg3 handler:(void (^)(GKGameSession *, NSError *))arg4;
- (oneway void)fetchShareURLForSessionWithIdentifier:(NSString *)arg1 handler:(void (^)(NSURL *, NSError *))arg2;
- (oneway void)sendData:(NSData *)arg1 reliably:(BOOL)arg2 forSessionWithIdentifier:(NSString *)arg3 handler:(void (^)(NSError *))arg4;
- (oneway void)setConnectionState:(long long)arg1 forSessionWithIdentifier:(NSString *)arg2 handler:(void (^)(GKGameSession *, NSError *))arg3;
- (oneway void)saveData:(NSData *)arg1 forSessionWithIdentifier:(NSString *)arg2 changeTag:(NSString *)arg3 handler:(void (^)(GKGameSession *, NSData *, NSError *))arg4;
- (oneway void)loadDataForSessionWithIdentifier:(NSString *)arg1 handler:(void (^)(GKGameSession *, NSData *, NSError *))arg2;
- (oneway void)removePlayers:(NSArray *)arg1 forSessionWithIdentifier:(NSString *)arg2 handler:(void (^)(GKGameSession *, NSError *))arg3;
- (oneway void)removeSessionWithIdentifier:(NSString *)arg1 handler:(void (^)(NSError *))arg2;
- (oneway void)loadSessionWithIdentifier:(NSString *)arg1 handler:(void (^)(GKGameSession *, NSError *))arg2;
- (oneway void)loadSessionsInContainer:(NSString *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
- (oneway void)createSessionInContainer:(NSString *)arg1 withTitle:(NSString *)arg2 maxConnectedPlayers:(long long)arg3 handler:(void (^)(GKGameSession *, NSError *))arg4;
- (oneway void)primaryPlayerInContainer:(NSString *)arg1 handler:(void (^)(GKCloudPlayer *, NSError *))arg2;
@end


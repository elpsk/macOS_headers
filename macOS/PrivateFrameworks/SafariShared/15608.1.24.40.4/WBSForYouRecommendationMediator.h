//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/UABestAppSuggestionManagerDelegate-Protocol.h>

@class CKContextClient, NSArray, NSString, UABestAppSuggestion, UABestAppSuggestionManager, WBSForYouDataSourceWeightManager, WBSForYouPerSitePreferenceManager, WBSForYouTopicManager, WBSFoundInRecommendationManager;
@protocol OS_dispatch_queue;

@interface WBSForYouRecommendationMediator : NSObject <UABestAppSuggestionManagerDelegate>
{
    WBSForYouTopicManager *_topicManager;
    WBSFoundInRecommendationManager *_foundInManager;
    WBSForYouDataSourceWeightManager *_dataSourceWeightManager;
    WBSForYouPerSitePreferenceManager *_perSitePreferenceManager;
    UABestAppSuggestionManager *_appSuggestionManager;
    UABestAppSuggestion *_currentAppSuggestion;
    NSObject<OS_dispatch_queue> *_internalQueue;
    CKContextClient *_contextClient;
    CDUnknownBlockType _historyProvider;
    BOOL _ignoreMinimumNumberOfRecommendationsPerTopic;
    BOOL _suppressHistoryDeduplication;
}

+ (id)_adjustedTopicsWithTopics:(id)arg1;
+ (void)_rankRecommendationsInPlace:(id)arg1 history:(id)arg2 weightManager:(id)arg3 suppressHistoryDeduplication:(BOOL)arg4;
+ (double)scoreForRecommendation:(id)arg1 weightManager:(id)arg2 history:(id)arg3;
+ (id)_titleForRecommendationTopicSource:(unsigned long long)arg1;
+ (id)_titleForRecommendationSource:(unsigned long long)arg1;
+ (BOOL)areSiriSuggestionsEnabled;
@property(nonatomic) BOOL suppressHistoryDeduplication; // @synthesize suppressHistoryDeduplication=_suppressHistoryDeduplication;
@property(nonatomic) BOOL ignoreMinimumNumberOfRecommendationsPerTopic; // @synthesize ignoreMinimumNumberOfRecommendationsPerTopic=_ignoreMinimumNumberOfRecommendationsPerTopic;
- (void).cxx_destruct;
- (double)scoreForRecommendation:(id)arg1;
- (id)analyticsMetadataForRecommendation:(id)arg1;
- (void)fetchImageForRecommendation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) NSArray *dataSources;
- (void)bestAppSuggestionChanged:(id)arg1;
- (id)_dataSourceWeightManager;
- (void)clearDataSourceWeights;
- (void)downvoteSource:(unsigned long long)arg1;
- (void)stopListeningForURLSuggestionChanges;
- (void)beginListeningForURLSuggestionChanges;
- (void)endListeningForHandoffActivity;
- (void)beginListeningForHandoffActivity;
- (void)_createAppSuggestionsManagerIfNecessary;
- (void)retrieveHandoffRecommendationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_retrieveFoundInRecommendationsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_fetchImagesForRecommendations:(id)arg1 recommendationsDispatchGroup:(id)arg2;
- (void)obtainMessagesImagesWherePossibleForRecommendations:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadLinkPresentationMetadataForMessageWithGUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updatedRecommendationsForTopics:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_createPreferenceManagerIfNecessary;
- (void)banURLsOfSameDomainAsURL:(id)arg1;
- (void)updatedTopicsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_didUpdateFoundInSuggestions:(id)arg1;
- (void)dealloc;
- (id)initWithContextClient:(id)arg1 historyProvider:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


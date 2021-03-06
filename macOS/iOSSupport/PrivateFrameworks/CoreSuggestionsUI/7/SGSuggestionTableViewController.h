//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <CoreSuggestionsUI/SGSuggestionViewControllerPresenter-Protocol.h>

@class NSString, SGSuggestionStore;

@interface SGSuggestionTableViewController : UITableViewController <SGSuggestionViewControllerPresenter>
{
    SGSuggestionStore *_suggestionStore;
}

@property(retain, nonatomic) SGSuggestionStore *suggestionStore; // @synthesize suggestionStore=_suggestionStore;
- (void).cxx_destruct;
- (void)dismissViewController:(id)arg1;
- (void)presentViewController:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)listDidChangeNotification:(id)arg1;
- (void)updatePrefferedSize;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class AKController;

@interface MUContentViewController : NSViewController
{
    id <MUContentViewControllerDelegate> _delegate;
    AKController *_annotationController;
}

- (void).cxx_destruct;
@property(retain) AKController *annotationController; // @synthesize annotationController=_annotationController;
@property __weak id <MUContentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 delegate:(id)arg3;

@end


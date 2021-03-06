//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Photos/PHImportExceptionRecorder.h>

@class NSDate, NSError, NSMutableArray, NSMutableDictionary, PHImportSource;

@interface PHImportResults : PHImportExceptionRecorder
{
    unsigned char _result;
    PHImportSource *_importSource;
    NSMutableArray *_importRecords;
    NSDate *_startTime;
    NSDate *_endTime;
    NSMutableDictionary *_pmrInfo;
}

+ (id)resultsWithExceptions:(id)arg1;
+ (id)resultsWithException:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *pmrInfo; // @synthesize pmrInfo=_pmrInfo;
@property(retain, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(readonly) unsigned char result; // @synthesize result=_result;
@property(retain, nonatomic) NSMutableArray *importRecords; // @synthesize importRecords=_importRecords;
@property(readonly) PHImportSource *importSource; // @synthesize importSource=_importSource;
- (void).cxx_destruct;
- (void)logPMR;
- (void)log:(id)arg1 activity:(id)arg2 description:(id)arg3 digits:(unsigned long long)arg4;
- (void)verifyGroups:(id)arg1;
- (void)insertStart:(id)arg1 end:(id)arg2 intoGroups:(id)arg3 ofType:(unsigned long long)arg4;
- (id)generatePMRInfo;
- (double)runTime;
- (id)importRecordExceptionsOfImportance:(unsigned long long)arg1;
- (id)criticalExceptions;
@property(readonly) NSError *error;
@property(readonly) unsigned long long failedToImportCount;
@property(readonly) unsigned long long importedCount;
- (void)addImportRecord:(id)arg1;
- (void)addUnsupportedPath:(id)arg1;
- (id)init;

@end


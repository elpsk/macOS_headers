//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MetricKit/MXMetric.h>

@class MXAverage, NSMeasurement;

@interface MXMemoryMetric : MXMetric
{
    NSMeasurement *_peakMemoryUsage;
    MXAverage *_averageSuspendedMemory;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) MXAverage *averageSuspendedMemory; // @synthesize averageSuspendedMemory=_averageSuspendedMemory;
@property(readonly) NSMeasurement *peakMemoryUsage; // @synthesize peakMemoryUsage=_peakMemoryUsage;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithPeakMemoryUsageMeasurement:(id)arg1 averageMemoryUsageMeasurement:(id)arg2;

@end


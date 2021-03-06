//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Metal/MTLLibrary-Protocol.h>

@class MTLFunctionConstantValues, NSArray, NSString;
@protocol MTLFunction, MTLPipelineCache, MTLPipelineLibrary;

@protocol MTLLibrarySPI <MTLLibrary>
@property(readonly) NSArray *externFunctionNames;
@property(copy) NSString *overrideTriple;
- (void)newFunctionWithName:(NSString *)arg1 constantValues:(MTLFunctionConstantValues *)arg2 pipelineLibrary:(id <MTLPipelineLibrary>)arg3 completionHandler:(void (^)(id <MTLFunction>, NSError *))arg4;
- (id <MTLFunction>)newFunctionWithName:(NSString *)arg1 constantValues:(MTLFunctionConstantValues *)arg2 pipelineLibrary:(id <MTLPipelineLibrary>)arg3 error:(id *)arg4;
- (id <MTLFunction>)newFunctionWithName:(NSString *)arg1 constantValues:(MTLFunctionConstantValues *)arg2 functionCache:(id <MTLPipelineCache>)arg3 error:(id *)arg4;
- (id <MTLFunction>)newExternFunctionWithName:(NSString *)arg1;
@end


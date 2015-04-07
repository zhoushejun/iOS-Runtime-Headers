/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray;

@interface OITSUPerformanceTestHarness : NSObject {
    BOOL mPassed;
    int mPassingTests;
    BOOL mQuiet;
    struct timeval { 
        int tv_sec; 
        int tv_usec; 
    } mSetupTime;
    NSMutableArray *mTestCases;
    int mTotalTests;
}

@property(readonly) BOOL passed;
@property(readonly) int passingTestCount;
@property BOOL quiet;
@property(readonly) int testCount;

+ (id)harness;

- (void)cleanup;
- (void)dealloc;
- (id)init;
- (id)p_createResultDirectory;
- (void)p_writeConsoleMessagesToDirectory:(id)arg1;
- (void)p_writeCsvResultsToDirectory:(id)arg1;
- (void)p_writeSystemConfigurationToDirectory:(id)arg1;
- (BOOL)passed;
- (int)passingTestCount;
- (BOOL)quiet;
- (void)report;
- (void)runTestWithName:(id)arg1 selector:(SEL)arg2 goalTime:(double)arg3;
- (void)runTestWithName:(id)arg1 selector:(SEL)arg2 goalTime:(double)arg3 precision:(double)arg4;
- (BOOL)runTests;
- (void)setQuiet:(BOOL)arg1;
- (void)setup;
- (int)testCount;
- (void)testSuite;
- (id)testWithName:(id)arg1 selector:(SEL)arg2 goalTime:(double)arg3;

@end

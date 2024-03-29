/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class TSUProgressContext;

__attribute__((visibility("hidden")))
@interface TSUProgressStage : XXUnknownSuperclass {
@private
	double m_currentPosition;
	double m_totalSteps;
	double m_stepsInParent;
	double m_startInParent;
	double m_nextSubStageParentSize;
	TSUProgressStage* m_parentStage;
	TSUProgressContext* m_context;
}
@property(assign) double nextSubStageParentSize;	// converted property
@property(readonly, assign) double currentPosition;	// converted property
@property(readonly, retain) TSUProgressStage* parentStage;	// converted property
-(id)description;
// converted property setter: -(void)setNextSubStageParentSize:(double)size;
// converted property getter: -(double)nextSubStageParentSize;
-(double)overallProgress;
// converted property getter: -(double)currentPosition;
// converted property getter: -(id)parentStage;
-(void)end;
-(void)setProgressPercentage:(double)percentage;
-(void)setProgress:(double)progress;
-(void)advanceProgress:(double)progress;
-(void)dealloc;
-(id)initWithSteps:(double)steps takingSteps:(double)steps2 inContext:(id)context;
-(id)initRootStageInContext:(id)context;
@end


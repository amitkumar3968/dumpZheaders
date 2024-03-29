/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import "TextInput-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSOperationQueue, TIMecabraWrapper, TIWordSearchOperationGetCandidates;

@interface TIWordSearch : XXUnknownSuperclass {
@private
	TIMecabraWrapper* _mecabraWrapper;
	NSOperationQueue* _operationQueue;
	TIWordSearchOperationGetCandidates* _operation;
	BOOL _autoCorrects;
	BOOL _shouldLearnAcceptedCandidate;
}
@property(retain) TIWordSearchOperationGetCandidates* operation;	// @synthesize=_operation
@property(readonly, assign) NSOperationQueue* operationQueue;	// @synthesize=_operationQueue
@property(readonly, assign) TIMecabraWrapper* mecabraWrapper;	// @synthesize=_mecabraWrapper
@property(readonly, assign) Mecabra* mecabra;
@property(assign) BOOL shouldLearnAcceptedCandidate;	// @synthesize=_shouldLearnAcceptedCandidate
@property(assign) BOOL autoCorrects;	// @synthesize=_autoCorrects
// declared property setter: -(void)setShouldLearnAcceptedCandidate:(BOOL)learnAcceptedCandidate;
// declared property getter: -(BOOL)shouldLearnAcceptedCandidate;
// declared property setter: -(void)setAutoCorrects:(BOOL)corrects;
// declared property getter: -(BOOL)autoCorrects;
// declared property setter: -(void)setOperation:(id)operation;
// declared property getter: -(id)operation;
-(void)updateUserWordEntries;
-(float)getLoglikelihoodFromZephyr:(TIInputManagerZephyr*)zephyr keys:(unsigned short*)keys length:(int)length touch_index:(int)index totalCount:(int)count;
-(id)geometryModelDataFromZephyr:(TIInputManagerZephyr*)zephyr;
-(void)jettisonMecabraInstance;
-(void)saveLearningDictionary;
-(void)completeOperationsInQueue;
-(void)lastAcceptedCandidateCorrected;
-(void)performOperationAsync:(id)async;
-(void)resetPreviousWord;
-(BOOL)isCancelled;
-(void)cancel;
-(void)performAccept:(id)accept isPartial:(BOOL)partial;
-(id)facemarkCandiates;
-(id)cachedCandidatesForOperation:(id)operation;
-(id)candidatesForOperation:(id)operation;
-(void)springBoardDidResignNotification:(id)springBoard;
-(void)dealloc;
-(id)initTIWordSearch;
// declared property getter: -(id)operationQueue;
-(unsigned long)mecabraCreationOptions;
-(CFURLRef)createMecabraLearningDictionaryDirectory;
-(int)mecabraInputMethodType;
// declared property getter: -(Mecabra*)mecabra;
// declared property getter: -(id)mecabraWrapper;
-(void)clearLearningDictionary;
-(void)updateMecabraState;
-(void)clearCache;
@end


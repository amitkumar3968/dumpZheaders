/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import "iPodUI-Structs.h"
#import "IUFoldingTransitionView.h"

@class FoldingTransitionViewFaceParameters;

@interface IUJustForYouTransitionView : IUFoldingTransitionView {
	FoldingTransitionViewFaceParameters* _faceParameters[4];
}
-(void)setFacesWithControllerToSnapshot:(id)snapshot;
-(unsigned)frontFaceIndex;
-(unsigned)faceCount;
-(void)initializeFaceParameters;
-(void)releaseFaceParameters;
-(id)parametersForFaceWithIndex:(unsigned)index;
@end


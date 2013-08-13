/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "NSObject.h"
#import "Preferences-Structs.h"


@protocol UIScrollViewDelegate <NSObject>
@optional
-(void)scrollViewDidScrollToTop:(id)scrollView;
-(BOOL)scrollViewShouldScrollToTop:(id)scrollView;
-(void)scrollViewDidEndZooming:(id)scrollView withView:(id)view atScale:(float)scale;
-(void)scrollViewWillBeginZooming:(id)scrollView withView:(id)view;
-(id)viewForZoomingInScrollView:(id)scrollView;
-(void)scrollViewDidEndScrollingAnimation:(id)scrollView;
-(void)scrollViewDidEndDecelerating:(id)scrollView;
-(void)scrollViewWillBeginDecelerating:(id)scrollView;
-(void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;
-(void)scrollViewWillEndDragging:(id)scrollView withVelocity:(CGPoint)velocity targetContentOffset:(inout CGPoint*)offset;
-(void)scrollViewWillBeginDragging:(id)scrollView;
-(void)scrollViewDidZoom:(id)scrollView;
-(void)scrollViewDidScroll:(id)scrollView;
@end


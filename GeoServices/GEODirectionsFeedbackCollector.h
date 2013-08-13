/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class GEODirectionsFeedback, GEODirectionsFeedbackCollection, NSMutableSet;

@interface GEODirectionsFeedbackCollector : XXUnknownSuperclass {
	GEODirectionsFeedback* _currentDirectionsFeedback;
	GEODirectionsFeedbackCollection* _currentFeedbackCollection;
	NSMutableSet* _routeIDs;
}
@property(retain, nonatomic) NSMutableSet* routeIDs;	// @synthesize=_routeIDs
@property(retain, nonatomic) GEODirectionsFeedback* currentDirectionsFeedback;	// @synthesize=_currentDirectionsFeedback
@property(retain, nonatomic) GEODirectionsFeedbackCollection* currentFeedbackCollection;	// @synthesize=_currentFeedbackCollection
// declared property setter: -(void)setRouteIDs:(id)ids;
// declared property getter: -(id)routeIDs;
// declared property setter: -(void)setCurrentDirectionsFeedback:(id)feedback;
// declared property getter: -(id)currentDirectionsFeedback;
// declared property setter: -(void)setCurrentFeedbackCollection:(id)collection;
// declared property getter: -(id)currentFeedbackCollection;
-(void)endFeedbackSession;
-(void)addRouteID:(id)anId stepID:(unsigned)anId2;
-(void)startFeedbackSessionForResponseID:(id)responseID;
-(void)reset;
-(void)dealloc;
@end

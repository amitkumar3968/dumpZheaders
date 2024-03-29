/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NSXMLParserDelegate.h"

@class NSURL, NSMutableString;

@interface SWTotalsFileSerializer : XXUnknownSuperclass <NSXMLParserDelegate> {
	unsigned _totalWorkouts;
	unsigned _totalCalories;
	unsigned _totalSeconds;
	unsigned _mostCalories;
	unsigned _total5K;
	unsigned _total10K;
	unsigned _totalMarathon;
	unsigned _totalHalfMarathon;
	float _farthestMile;
	float _totalDistanceMiles;
	unsigned _totalWeightWorkouts;
	double _weight;
	NSMutableString* _foundCharacters;
	NSURL* _url;
}
@property(readonly, assign) double weight;	// @synthesize=_weight
@property(readonly, assign) unsigned totalWeightWorkouts;	// @synthesize=_totalWeightWorkouts
@property(readonly, assign) float totalDistanceMiles;	// @synthesize=_totalDistanceMiles
@property(readonly, assign) float farthestMile;	// @synthesize=_farthestMile
@property(readonly, assign) unsigned totalHalfMarathon;	// @synthesize=_totalHalfMarathon
@property(readonly, assign) unsigned totalMarathon;	// @synthesize=_totalMarathon
@property(readonly, assign) unsigned total10K;	// @synthesize=_total10K
@property(readonly, assign) unsigned total5K;	// @synthesize=_total5K
@property(readonly, assign) unsigned mostCalories;	// @synthesize=_mostCalories
@property(readonly, assign) unsigned totalSeconds;	// @synthesize=_totalSeconds
@property(readonly, assign) unsigned totalCalories;	// @synthesize=_totalCalories
@property(readonly, assign) unsigned totalWorkouts;	// @synthesize=_totalWorkouts
@property(readonly, retain) NSURL* url;	// converted property
+(void)initialize;
// declared property getter: -(double)weight;
// declared property getter: -(unsigned)totalWeightWorkouts;
// declared property getter: -(float)totalDistanceMiles;
// declared property getter: -(float)farthestMile;
// declared property getter: -(unsigned)totalHalfMarathon;
// declared property getter: -(unsigned)totalMarathon;
// declared property getter: -(unsigned)total10K;
// declared property getter: -(unsigned)total5K;
// declared property getter: -(unsigned)mostCalories;
// declared property getter: -(unsigned)totalSeconds;
// declared property getter: -(unsigned)totalCalories;
// declared property getter: -(unsigned)totalWorkouts;
-(void)parseWeight;
-(void)parseTotalWeightWorkouts;
-(void)parseTotalDistanceMiles;
-(void)parseFarthestMile;
-(void)parseTotalHalfMarathon;
-(void)parseTotalMarathon;
-(void)parseTotal10K;
-(void)parseTotal5K;
-(void)parseMostCalories;
-(void)parseTotalSeconds;
-(void)parseTotalCalories;
-(void)parseTotalWorkouts;
-(void)parser:(id)parser didEndElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name;
-(void)parser:(id)parser foundCharacters:(id)characters;
-(void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;
-(void)parserDidStartDocument:(id)parser;
-(void)reset;
// converted property getter: -(id)url;
-(void)dealloc;
-(id)initWithContentsOfURL:(id)url;
-(id)init;
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import </libobjc.A.h>

@class WebFramePrivate;

@interface WebFrame : NSObject {
@private
	WebFramePrivate* _private;
}
@property(assign) BOOL mediaDataLoadsAutomatically;	// converted property
@property(assign) BOOL isSingleLine;	// converted property
+(void)_createMainFrameWithSimpleHTMLDocumentWithPage:(Page*)page frameView:(id)view style:(id)style;
+(PassRefPtr<WebCore::Frame>)_createSubframeWithOwnerElement:(HTMLFrameOwnerElement*)ownerElement frameName:(const String*)name frameView:(id)view;
+(void)_createMainFrameWithPage:(Page*)page frameName:(const String*)name frameView:(id)view;
+(PassRefPtr<WebCore::Frame>)_createFrameWithPage:(Page*)page frameName:(const String*)name frameView:(id)view ownerElement:(HTMLFrameOwnerElement*)element;
+(id)stringWithData:(id)data textEncodingName:(id)name;
-(OpaqueJSContext*)globalContext;
-(id)windowObject;
-(id)childFrames;
-(id)parentFrame;
-(id)findFrameNamed:(id)named;
-(void)reloadFromOrigin;
-(void)reload;
-(void)stopLoading;
-(void)loadArchive:(id)archive;
-(void)loadAlternateHTMLString:(id)string baseURL:(id)url forUnreachableURL:(id)unreachableURL;
-(void)loadHTMLString:(id)string baseURL:(id)url;
-(void)_loadHTMLString:(id)string baseURL:(id)url unreachableURL:(id)url3;
-(void)loadData:(id)data MIMEType:(id)type textEncodingName:(id)name baseURL:(id)url;
-(void)_loadData:(id)data MIMEType:(id)type textEncodingName:(id)name baseURL:(id)url unreachableURL:(id)url5;
-(void)loadRequest:(id)request;
-(id)dataSource;
-(id)provisionalDataSource;
-(id)frameElement;
-(id)DOMDocument;
-(id)webView;
-(id)frameView;
-(id)name;
-(void)finalize;
-(void)dealloc;
-(id)initWithName:(id)name webFrameView:(id)view webView:(id)view3;
-(id)init;
-(void)printToCGContext:(CGContextRef)cgcontext :(float)arg2 :(float)arg3;
-(id)pageSizeAndMarginsInPixels:(int)pixels :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7;
-(bool)isPageBoxVisible:(int)visible;
-(id)pageProperty:(const char*)property :(int)arg2;
-(int)numberOfPages:(float)pages :(float)arg2;
-(int)pageNumberForElement:(id)element :(float)arg2 :(float)arg3;
-(id)counterValueForElement:(id)element;
-(id)renderTreeAsExternalRepresentationForPrinting:(BOOL)printing;
-(void)_commitData:(id)data;
-(BOOL)_canSaveAsWebArchive;
-(BOOL)_canProvideDocumentSource;
-(void)_setTypingStyle:(id)style withUndoAction:(int)undoAction;
-(id)_typingStyle;
-(id)_characterRangeAtPoint:(CGPoint)point;
-(VisiblePosition)_visiblePositionForPoint:(CGPoint)point;
-(void)_insertParagraphSeparatorInQuotedContent;
-(void)_replaceSelectionWithNode:(id)node selectReplacement:(BOOL)replacement smartReplace:(BOOL)replace matchStyle:(BOOL)style;
-(id)_documentFragmentWithNodesAsParagraphs:(id)nodesAsParagraphs;
-(id)_documentFragmentWithMarkupString:(id)markupString baseURLString:(id)string;
-(id)_smartDeleteRangeForProposedRange:(id)proposedRange;
-(id)_markDOMRange;
-(NSRange)_convertDOMRangeToNSRange:(id)nsrange;
-(id)_convertNSRangeToDOMRange:(NSRange)domrange;
-(PassRefPtr<WebCore::Range>)_convertToDOMRange:(NSRange)domrange;
-(NSRange)_convertToNSRange:(Range*)nsrange;
-(int)_selectionGranularity;
-(BOOL)_needsLayout;
-(void)_scrollDOMRangeToVisible:(id)visible withInset:(float)inset;
-(void)_scrollDOMRangeToVisible:(id)visible;
-(CGRect)_firstRectForDOMRange:(id)domrange;
-(CGRect)_caretRectAtPosition:(const Position*)position affinity:(int)affinity;
-(id)_stringByEvaluatingJavaScriptFromString:(id)string forceUserGesture:(BOOL)gesture;
-(id)_stringByEvaluatingJavaScriptFromString:(id)string;
-(BOOL)_getVisibleRect:(CGRect*)rect;
-(void)_drawRect:(CGRect)rect contentsOnly:(BOOL)only;
-(BOOL)_shouldFlattenCompositingLayers:(CGContextRef)layers;
-(id)_stringForRange:(id)range;
-(id)_selectedString;
-(id)_markupStringFromRange:(id)range nodes:(id*)nodes;
-(id)_nodesFromList:(Vector<WebCore::Node* , 0>*)list;
-(id)_stringWithDocumentTypeStringAndMarkupString:(id)documentTypeStringAndMarkupString;
-(void)_setIsCommitting:(BOOL)committing;
-(BOOL)_isCommitting;
-(id)_dataSource;
-(void)_clearSelectionInOtherFrames;
-(id)_findFrameWithSelection;
-(void)_clearSelection;
-(BOOL)_hasSelection;
-(void)_unmarkAllMisspellings;
-(void)_unmarkAllBadGrammar;
-(id)_internalLoadDelegate;
-(void)_setInternalLoadDelegate:(id)delegate;
-(void)_updateBackgroundAndUpdatesWhileOffscreen;
-(void)_clearCoreFrame;
-(id)_initWithWebFrameView:(id)webFrameView webView:(id)view;
-(void)_detachScriptDebugger;
-(void)_attachScriptDebugger;
-(BOOL)_isIncludedInWebKitStatistics;
-(void)_dispatchDidReceiveTitle:(id)_dispatch;
-(BOOL)focusedNodeHasContent;
-(id)_documentFragmentForImageData:(id)imageData withRelativeURLPart:(id)relativeURLPart andMIMEType:(id)type;
-(id)_documentFragmentForWebArchive:(id)webArchive;
-(id)_documentFragmentForText:(id)text;
-(id)_computePageRectsWithPrintScaleFactor:(float)printScaleFactor pageSize:(CGSize)size;
-(void)_clearOpener;
-(id)accessibilityRoot;
-(id)_layerTreeAsText;
-(void)setAccessibleName:(id)name;
-(OpaqueJSContext*)_globalContextForScriptWorld:(id)scriptWorld;
-(id)_stringByEvaluatingJavaScriptFromString:(id)string withGlobalObject:(OpaqueJSValue*)globalObject inScriptWorld:(id)scriptWorld;
-(BOOL)_allowsFollowingLink:(id)link;
-(id)_cacheabilityDictionary;
-(void)_replaceSelectionWithMarkupString:(id)markupString baseURLString:(id)string selectReplacement:(BOOL)replacement smartReplace:(BOOL)replace;
-(void)_replaceSelectionWithText:(id)text selectReplacement:(BOOL)replacement smartReplace:(BOOL)replace;
-(BOOL)hasRichlyEditableSelection;
-(void)removeUnchangeableStyles;
-(void)_replaceSelectionWithFragment:(id)fragment selectReplacement:(BOOL)replacement smartReplace:(BOOL)replace matchStyle:(BOOL)style;
-(void)_resumeAnimations;
-(void)_suspendAnimations;
-(void)_replaceSelectionWithWebArchive:(id)webArchive selectReplacement:(BOOL)replacement smartReplace:(BOOL)replace;
-(void)_replaceSelectionWithText:(id)text selectReplacement:(BOOL)replacement smartReplace:(BOOL)replace matchStyle:(BOOL)style;
-(id)stringForRange:(id)range;
-(id)stringByEvaluatingJavaScriptFromString:(id)string forceUserGesture:(BOOL)gesture;
-(void)_userScrolled;
-(void)sendScrollEvent;
-(GSFontRef)fontForSelection:(BOOL*)selection;
-(CGRect)firstRectForDOMRange:(id)domrange;
-(id)convertNSRangeToDOMRange:(NSRange)domrange;
-(NSRange)convertDOMRangeToNSRange:(id)nsrange;
-(id)characterRangeAtPoint:(CGPoint)point;
-(CGRect)caretRectAtNode:(id)node offset:(int)offset affinity:(int)affinity;
-(void)clearPPTStats;
-(void)getPPTStatsWithParseCount:(unsigned*)parseCount withLayoutCount:(unsigned*)layoutCount withForcedLayoutCount:(unsigned*)forcedLayoutCount withParseDuration:(double*)parseDuration withLayoutDuration:(double*)layoutDuration;
-(void)recursiveSetUpdateAppearanceEnabled:(BOOL)enabled;
-(id)dictationResultMetadataForRange:(id)range;
-(void)getDictationResultRanges:(id*)ranges andMetadatas:(id*)metadatas;
-(id)interpretationsForCurrentRoot;
-(void)setDictationPhrases:(id)phrases metadata:(id)metadata asChildOfElement:(id)element;
-(void)setText:(id)text asChildOfElement:(id)element;
-(void)confirmMarkedText:(id)text;
-(void)setMarkedText:(id)text forCandidates:(BOOL)candidates;
-(void)setMarkedText:(id)text selectedRange:(NSRange)range;
-(id)markedTextDOMRange;
-(void)selectNSRange:(NSRange)range onElement:(id)element;
-(id)rangeByExtendingCurrentSelection:(int)selection;
-(id)rangeByMovingCurrentSelection:(int)selection;
-(BOOL)selectionAtWordStart;
-(BOOL)selectionAtSentenceStart;
-(BOOL)selectionAtDocumentStart;
-(id)wordsInCurrentParagraph;
-(BOOL)spaceFollowsWordInRange:(id)range;
-(int)wordOffsetInRange:(id)range;
-(id)wordInRange:(id)range;
-(id)wordRangeContainingCaretSelection;
-(unsigned short)characterAfterCaretSelection;
-(unsigned short)characterBeforeCaretSelection;
-(unsigned short)characterInRelationToCaretSelection:(int)caretSelection;
-(void)expandSelectionToStartOfWordContainingCaretSelection;
-(void)expandSelectionToWordContainingCaretSelection;
-(id)elementRangeContainingCaretSelection;
-(void)expandSelectionToElementContainingCaretSelection;
-(int)selectionAffinity;
-(void)setSelectedDOMRange:(id)range affinity:(int)affinity closeTyping:(BOOL)typing;
-(id)selectedDOMRange;
// converted property setter: -(void)setMediaDataLoadsAutomatically:(BOOL)automatically;
// converted property getter: -(BOOL)mediaDataLoadsAutomatically;
-(BOOL)isTelephoneNumberParsingEnabled;
-(BOOL)isTelephoneNumberParsingAllowed;
-(int)layoutCount;
-(id)documentView;
-(void)setCaretColor:(CGColorRef)color;
-(void)createDefaultFieldEditorDocumentStructure;
-(CGRect)rectForScrollToVisible;
-(CGRect)caretRect;
-(void)setSelectionChangeCallbacksDisabled:(BOOL)disabled;
-(void)setIsActive:(BOOL)active;
-(void)updateLayout;
-(int)innerLineHeight:(id)height;
-(int)preferredHeight;
-(BOOL)hasEditableSelection;
-(void)resetSelection;
-(void)revealSelectionAtExtent:(BOOL)extent;
-(void)_setProhibitsScrolling:(BOOL)scrolling;
-(void)_setTextAutosizingWidth:(float)width;
-(void)_setVisibleSize:(CGSize)size;
-(CGRect)renderRectForPoint:(CGPoint)point isReplaced:(BOOL*)replaced fontSize:(float*)size;
-(id)approximateNodeAtViewportLocation:(CGPoint*)viewportLocation;
-(id)scrollableNodeAtViewportLocation:(CGPoint)viewportLocation;
-(id)deepestNodeAtViewportLocation:(CGPoint)viewportLocation;
-(CGSize)renderedSizeOfNode:(id)node constrainedToWidth:(float)width;
-(void)setNeedsLayout;
-(void)sendOrientationChangeEvent:(int)event;
-(void)resetTextAutosizingBeforeLayout;
-(void)_saveViewState;
-(void)_restoreViewState;
-(void)_setSelectionFromNone;
-(void)_selectAll;
-(void)_handleKeyEvent:(id)event;
-(void)forceLayoutAdjustingViewSize:(BOOL)size;
-(NSRange)selectedNSRange;
-(void)selectWithoutClosingTypingNSRange:(NSRange)range;
-(void)selectNSRange:(NSRange)range;
-(void)resumeFromPause;
-(void)prepareForPause;
-(void)setPluginsPaused:(BOOL)paused;
-(void)setTimeoutsPaused:(BOOL)paused;
-(unsigned)formElementsCharacterCount;
-(unsigned)_numberOfActiveAnimations;
-(BOOL)_pauseTransitionOfProperty:(id)property onNode:(id)node atTime:(double)time;
-(BOOL)_pauseAnimation:(id)animation onNode:(id)node atTime:(double)time;
-(void)_setExcludeFromTextSearch:(bool)textSearch;
-(void)_setIsDisconnected:(bool)disconnected;
-(unsigned)_pendingFrameUnloadEventCount;
-(BOOL)_isDisplayingStandaloneImage;
-(void)_selectNSRange:(NSRange)range;
-(NSRange)_selectedNSRange;
-(id)_selectionRangeForPoint:(CGPoint)point;
-(id)_selectionRangeForFirstPoint:(CGPoint)firstPoint secondPoint:(CGPoint)point;
-(id)_rectsForRange:(id)range;
-(BOOL)_loadsSynchronously;
-(void)_setLoadsSynchronously:(BOOL)synchronously;
-(BOOL)needsLayout;
-(int)_loadType;
-(BOOL)_isVisuallyNonEmpty;
-(BOOL)_firstLayoutDone;
-(BOOL)_isFrameSet;
-(CGColorRef)_bodyBackgroundColor;
-(void)_setShouldCreateRenderers:(BOOL)_set;
-(BOOL)_isDescendantOfFrame:(id)frame;
-(id)nextUnperturbedDictationResultBoundaryFromPosition:(id)position;
-(id)previousUnperturbedDictationResultBoundaryFromPosition:(id)position;
-(CGImageRef)imageForNode:(id)node allowDownsampling:(BOOL)downsampling drawContentBehindTransparentNodes:(BOOL)nodes;
-(BOOL)renderedCharactersExceed:(unsigned)exceed;
-(id)endPosition;
-(id)startPosition;
-(void)smartExtendRangedSelection:(int)selection;
-(void)setSelectionGranularity:(int)granularity;
-(void)moveSelectionToPoint:(CGPoint)point;
-(void)moveSelectionToEnd;
-(void)moveSelectionToStart;
-(void)setBaseWritingDirection:(int)direction;
-(void)toggleBaseWritingDirection;
-(int)selectionBaseWritingDirection;
-(void)expandSelectionToSentence;
-(void)aggressivelyExpandSelectionToWordContainingCaretSelection;
-(void)ensureRangedSelectionContainsInitialStartPoint:(CGPoint)point initialEndPoint:(CGPoint)point2;
-(void)setSelectionWithFirstPoint:(CGPoint)firstPoint secondPoint:(CGPoint)point;
-(BOOL)setSelectionWithBasePoint:(CGPoint)basePoint extentPoint:(CGPoint)point baseIsStart:(BOOL)start;
-(BOOL)setSelectionWithBasePoint:(CGPoint)basePoint extentPoint:(CGPoint)point baseIsStart:(BOOL)start allowFlipping:(BOOL)flipping;
-(BOOL)setRangedSelectionExtentPoint:(CGPoint)point baseIsStart:(BOOL)start allowFlipping:(BOOL)flipping;
-(void)setRangedSelectionWithExtentPoint:(CGPoint)extentPoint;
-(void)setRangedSelectionInitialExtentToCurrentSelectionEnd;
-(void)setRangedSelectionInitialExtentToCurrentSelectionStart;
-(void)clearRangedSelectionInitialExtent;
-(void)setRangedSelectionBaseToCurrentSelectionEnd;
-(void)setRangedSelectionBaseToCurrentSelectionStart;
-(void)setRangedSelectionBaseToCurrentSelection;
-(id)webVisiblePositionForPoint:(CGPoint)point;
-(id)wordAtPoint:(CGPoint)point;
-(id)selectionRects;
-(id)selectionRectsForRange:(id)range;
-(id)selectionRectsForCoreRange:(Range*)coreRange;
-(void)extendSelection:(BOOL)selection;
-(void)collapseSelection;
-(CGRect)closestCaretRectInMarkedTextRangeForPoint:(CGPoint)point;
-(CGRect)caretRectForPosition:(id)position;
-(BOOL)hasSelection;
-(int)selectionState;
-(void)clearSelection;
// converted property setter: -(void)setIsSingleLine:(BOOL)line;
// converted property getter: -(BOOL)isSingleLine;
-(VisiblePosition)closestWordBoundary:(VisiblePosition)boundary;
-(VisiblePosition)visiblePositionForPoint:(CGPoint)point;
-(Frame*)coreFrame;
@end


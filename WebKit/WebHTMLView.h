/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebDocumentOptionsSearching.h"
#import "WebKit-Structs.h"
#import "WebDocumentView.h"
#import "WebDocumentSearching.h"
#import "WebDocumentSelection.h"
#import "WebDocumentIncrementalSearching.h"
#import "WebDocumentElement.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "WebMultipleTextMatches.h"

@class WebHTMLViewPrivate;

@interface WebHTMLView : XXUnknownSuperclass <WebDocumentSelection, WebDocumentIncrementalSearching, WebDocumentElement, WebMultipleTextMatches, WebDocumentOptionsSearching, WebDocumentView, WebDocumentSearching> {
@private
	WebHTMLViewPrivate* _private;
}
@property(assign) BOOL markedTextMatchesAreHighlighted;	// converted property
+(void)initialize;
+(id)unsupportedTextMIMETypes;
+(id)supportedNonImageMIMETypes;
+(id)supportedImageMIMETypes;
+(id)supportedMIMETypes;
-(void)_windowChangedKeyState;
-(void)_updateControlTints;
-(BOOL)_wantsKeyDownForEvent:(id)event;
-(void)makeBaseWritingDirectionNatural:(id)natural;
-(void)capitalizeWord:(id)word;
-(void)lowercaseWord:(id)word;
-(void)uppercaseWord:(id)word;
-(void)_changeWordCaseWithSelector:(SEL)selector;
-(void)_applyStyleToSelection:(id)selection withUndoAction:(int)undoAction;
-(id)_emptyStyle;
-(void)centerSelectionInVisibleArea:(id)visibleArea;
-(id)_accessibilityParentForSubview:(id)subview;
-(id)accessibilityHitTest:(CGPoint)test;
-(id)accessibilityFocusedUIElement;
-(void)keyUp:(id)up;
-(void)keyDown:(id)down;
-(void)_setPrinting:(BOOL)printing minimumPageLogicalWidth:(float)width logicalHeight:(float)height originalPageWidth:(float)width4 originalPageHeight:(float)height5 maximumShrinkRatio:(float)ratio adjustViewSize:(BOOL)size paginateScreenContent:(BOOL)content;
-(void)dataSourceUpdated:(id)updated;
-(void)setDataSource:(id)source;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(void)mouseUp:(id)up;
-(void)touch:(id)touch;
-(void)mouseDown:(id)down;
-(BOOL)_isSelectionEvent:(id)event;
-(void)scrollWheel:(id)wheel;
-(void)drawRect:(CGRect)rect;
-(void)drawSingleRect:(CGRect)rect;
-(void)setNeedsToApplyStyles:(BOOL)applyStyles;
-(void)setNeedsLayout:(BOOL)layout;
-(void)setNeedsDisplayInRect:(CGRect)rect;
-(BOOL)isOpaque;
-(void)clearFocus;
-(BOOL)searchFor:(id)aFor direction:(BOOL)direction caseSensitive:(BOOL)sensitive wrap:(BOOL)wrap;
-(void)layout;
-(void)layoutToMinimumPageWidth:(float)minimumPageWidth height:(float)height originalPageWidth:(float)width originalPageHeight:(float)height4 maximumShrinkRatio:(float)ratio adjustingViewSize:(BOOL)size;
-(void)reapplyStyles;
-(void)willRemoveSubview:(id)subview;
-(void)addSubview:(id)subview;
-(void)viewDidMoveToHostWindow;
-(void)viewWillMoveToHostWindow:(id)view;
-(void)_web_makePluginSubviewsPerformSelector:(SEL)selector withObject:(id)object;
-(void)viewDidMoveToWindow;
-(void)viewWillMoveToWindow:(id)view;
-(BOOL)maintainsInactiveSelection;
-(BOOL)acceptsFirstResponder;
-(void)jumpToSelection:(id)selection;
-(void)toggleUnderline:(id)underline;
-(void)toggleItalic:(id)italic;
-(void)toggleBold:(id)bold;
-(void)clearText:(id)text;
-(void)yankAndSelect:(id)select;
-(void)yank:(id)yank;
-(void)unscript:(id)unscript;
-(void)underline:(id)underline;
-(void)transpose:(id)transpose;
-(void)swapWithMark:(id)mark;
-(void)superscript:(id)superscript;
-(void)subscript:(id)subscript;
-(void)setMark:(id)mark;
-(void)selectWord:(id)word;
-(void)selectToMark:(id)mark;
-(void)selectSentence:(id)sentence;
-(void)selectParagraph:(id)paragraph;
-(void)selectLine:(id)line;
-(void)selectAll:(id)all;
-(void)pasteAsPlainText:(id)text;
-(void)pageUpAndModifySelection:(id)selection;
-(void)pageUp:(id)up;
-(void)pageDownAndModifySelection:(id)selection;
-(void)pageDown:(id)down;
-(void)outdent:(id)outdent;
-(void)moveWordRightAndModifySelection:(id)selection;
-(void)moveWordRight:(id)right;
-(void)moveWordLeftAndModifySelection:(id)selection;
-(void)moveWordLeft:(id)left;
-(void)moveWordForwardAndModifySelection:(id)selection;
-(void)moveWordForward:(id)forward;
-(void)moveWordBackwardAndModifySelection:(id)selection;
-(void)moveWordBackward:(id)backward;
-(void)moveUpAndModifySelection:(id)selection;
-(void)moveUp:(id)up;
-(void)moveToRightEndOfLineAndModifySelection:(id)lineAndModifySelection;
-(void)moveToRightEndOfLine:(id)line;
-(void)moveToLeftEndOfLineAndModifySelection:(id)lineAndModifySelection;
-(void)moveToLeftEndOfLine:(id)line;
-(void)moveToEndOfSentenceAndModifySelection:(id)sentenceAndModifySelection;
-(void)moveToEndOfSentence:(id)sentence;
-(void)moveToEndOfParagraphAndModifySelection:(id)paragraphAndModifySelection;
-(void)moveToEndOfParagraph:(id)paragraph;
-(void)moveToEndOfLineAndModifySelection:(id)lineAndModifySelection;
-(void)moveToEndOfLine:(id)line;
-(void)moveToEndOfDocumentAndModifySelection:(id)documentAndModifySelection;
-(void)moveToEndOfDocument:(id)document;
-(void)moveToBeginningOfSentenceAndModifySelection:(id)sentenceAndModifySelection;
-(void)moveToBeginningOfSentence:(id)sentence;
-(void)moveToBeginningOfParagraphAndModifySelection:(id)paragraphAndModifySelection;
-(void)moveToBeginningOfParagraph:(id)paragraph;
-(void)moveToBeginningOfLineAndModifySelection:(id)lineAndModifySelection;
-(void)moveToBeginningOfLine:(id)line;
-(void)moveToBeginningOfDocumentAndModifySelection:(id)documentAndModifySelection;
-(void)moveToBeginningOfDocument:(id)document;
-(void)moveRightAndModifySelection:(id)selection;
-(void)moveRight:(id)right;
-(void)moveParagraphForwardAndModifySelection:(id)selection;
-(void)moveParagraphBackwardAndModifySelection:(id)selection;
-(void)moveLeftAndModifySelection:(id)selection;
-(void)moveLeft:(id)left;
-(void)moveForwardAndModifySelection:(id)selection;
-(void)moveForward:(id)forward;
-(void)moveDownAndModifySelection:(id)selection;
-(void)moveDown:(id)down;
-(void)moveBackwardAndModifySelection:(id)selection;
-(void)moveBackward:(id)backward;
-(void)makeTextWritingDirectionRightToLeft:(id)left;
-(void)makeTextWritingDirectionNatural:(id)natural;
-(void)makeTextWritingDirectionLeftToRight:(id)right;
-(void)insertTabIgnoringFieldEditor:(id)editor;
-(void)insertTab:(id)tab;
-(void)insertParagraphSeparator:(id)separator;
-(void)insertNewlineIgnoringFieldEditor:(id)editor;
-(void)insertNewline:(id)newline;
-(void)insertLineBreak:(id)aBreak;
-(void)insertBacktab:(id)backtab;
-(void)indent:(id)indent;
-(void)ignoreSpelling:(id)spelling;
-(void)deleteWordForward:(id)forward;
-(void)deleteWordBackward:(id)backward;
-(void)deleteToMark:(id)mark;
-(void)deleteToEndOfParagraph:(id)paragraph;
-(void)deleteToEndOfLine:(id)line;
-(void)deleteToBeginningOfParagraph:(id)paragraph;
-(void)deleteToBeginningOfLine:(id)line;
-(void)deleteForward:(id)forward;
-(void)deleteBackwardByDecomposingPreviousCharacter:(id)character;
-(void)deleteBackward:(id)backward;
-(void)delete:(id)aDelete;
-(void)paste:(id)paste;
-(void)cut:(id)cut;
-(void)copy:(id)copy;
-(void)alignRight:(id)right;
-(void)alignLeft:(id)left;
-(void)alignJustified:(id)justified;
-(void)alignCenter:(id)center;
-(void)executeCoreCommandByName:(const char*)name;
-(void)executeCoreCommandBySelector:(SEL)selector;
-(Command)coreCommandByName:(const char*)name;
-(Command)coreCommandBySelector:(SEL)selector;
-(BOOL)callDelegateDoCommandBySelectorIfNeeded:(SEL)needed;
-(void)finalize;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
-(BOOL)_isTopHTMLView;
-(id)_topHTMLView;
-(void)_setMouseDownEvent:(id)event;
-(BOOL)_shouldDeleteRange:(id)range;
-(id)_selectedRange;
-(BOOL)_shouldReplaceSelectionWithText:(id)text givenAction:(int)action;
-(BOOL)_shouldInsertText:(id)text replacingDOMRange:(id)range givenAction:(int)action;
-(BOOL)_shouldInsertFragment:(id)fragment replacingDOMRange:(id)range givenAction:(int)action;
-(id)_frameView;
-(id)_webView;
-(id)_dataSource;
-(id)_documentRange;
-(id)accessibilityRootElement;
-(float)_adjustedBottomOfPageWithTop:(float)top bottom:(float)bottom limit:(float)limit;
-(void)_endScreenPaginationMode;
-(BOOL)_beginScreenPaginationModeWithPageSize:(CGSize)pageSize shrinkToFit:(BOOL)fit;
-(BOOL)_isInScreenPaginationMode;
-(void)_endPrintMode;
-(BOOL)_beginPrintModeWithPageWidth:(float)pageWidth height:(float)height shrinkToFit:(BOOL)fit;
-(BOOL)_beginPrintModeWithMinimumPageWidth:(float)minimumPageWidth height:(float)height maximumPageWidth:(float)width;
-(BOOL)_isInPrintMode;
-(id)_compositingLayersHostingView;
-(BOOL)_isUsingAcceleratedCompositing;
-(BOOL)_hasHTMLDocument;
-(void)close;
-(void)_removeHighlighterOfType:(id)type;
-(void)_setHighlighter:(id)highlighter ofType:(id)type;
-(void)_decreaseSelectionListLevel;
-(id)_increaseSelectionListLevelUnordered;
-(id)_increaseSelectionListLevelOrdered;
-(id)_increaseSelectionListLevel;
-(BOOL)_canDecreaseSelectionListLevel;
-(BOOL)_canIncreaseSelectionListLevel;
-(id)_insertUnorderedList;
-(id)_insertOrderedList;
-(void)_setTransparentBackground:(BOOL)background;
-(BOOL)_transparentBackground;
-(BOOL)_isEditable;
-(BOOL)_hasInsertionPoint;
-(BOOL)_hasSelectionOrInsertionPoint;
-(BOOL)_hasSelection;
-(BOOL)_canAlterCurrentSelection;
-(BOOL)_canEditRichly;
-(BOOL)_canEdit;
-(void)_autoscroll;
-(void)_stopAutoscrollTimer;
-(CGRect)_selectionRect;
-(void)_startAutoscrollTimer:(id)timer;
-(void)setScale:(float)scale;
-(void)layoutIfNeeded;
-(id)_pluginController;
-(void)_setToolTip:(id)tip;
-(void)_clearLastHitViewIfSelf;
-(id)hitTest:(CGPoint)test;
-(BOOL)_insideAnotherHTMLView;
-(void)viewWillDraw;
-(void)_restoreSubviews;
-(void)_setAsideSubviews;
-(void)_frameOrBoundsChanged;
-(void)mouseMoved:(id)moved;
-(BOOL)_web_isDrawingIntoLayer;
-(void)drawLayer:(id)layer inContext:(CGContextRef)context;
-(void)detachRootLayer;
-(void)attachRootLayer:(id)layer;
-(BOOL)_needsLayout;
-(void)_destroyAllWebPlugins;
-(void)_web_updateLayoutAndStyleIfNeededRecursive;
-(void)_layoutIfNeeded;
-(BOOL)_handleEditingKeyEvent:(KeyboardEvent*)event;
-(void)_executeSavedKeypressCommands;
-(void)closeIfNotCurrentView;
-(id)_frame;
-(id)_highlighterForType:(id)type;
-(BOOL)_canSmartCopyOrDelete;
-(void)_selectionChanged;
-(void)_updateSelectionForInputManager;
-(void)insertText:(id)text;
-(void)doCommandBySelector:(SEL)selector;
-(void)markedTextUpdate:(id)update;
-(void)setMarkedText:(id)text selectedRange:(NSRange)range;
-(void)unmarkText;
-(BOOL)hasMarkedText;
-(int)conversationIdentifier;
-(NSRange)markedRange;
-(NSRange)selectedRange;
-(CGRect)firstRectForCharacterRange:(NSRange)characterRange;
-(unsigned)characterIndexForPoint:(CGPoint)point;
-(BOOL)searchFor:(id)aFor direction:(BOOL)direction caseSensitive:(BOOL)sensitive wrap:(BOOL)wrap startInSelection:(BOOL)selection;
-(BOOL)supportsTextEncoding;
-(id)selectedString;
-(id)string;
-(void)deselectAll;
-(void)selectAll;
-(CGRect)selectionImageRect;
-(CGImageRef)selectionImageForcingBlackText:(BOOL)text;
-(id)selectionView;
-(id)selectionTextRects;
-(CGRect)selectionRect;
-(BOOL)_findString:(id)string options:(unsigned)options;
-(id)rectsForTextMatches;
-(void)unmarkAllTextMatches;
// converted property getter: -(BOOL)markedTextMatchesAreHighlighted;
// converted property setter: -(void)setMarkedTextMatchesAreHighlighted:(BOOL)highlighted;
-(unsigned)countMatchesForText:(id)text inDOMRange:(id)domrange options:(unsigned)options limit:(unsigned)limit markMatches:(BOOL)matches;
-(id)elementAtPoint:(CGPoint)point allowShadowContent:(BOOL)content;
-(id)elementAtPoint:(CGPoint)point;
@end


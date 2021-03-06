/* Generated by RuntimeBrowser.
 */

@protocol UIPDFSelectionWidget

@required

- (struct CGPoint { float x1; float x2; })currentSelectionPointOnPage;
- (void)endTracking;
- (void)hide;
- (BOOL)hitTest:(struct CGPoint { float x1; float x2; })arg1 fixedPoint:(struct CGPoint { float x1; float x2; }*)arg2 preceeds:(BOOL*)arg3;
- (struct CGPoint { float x1; float x2; })initialSelectionPointOnPage;
- (void)layout;
- (UIPDFPageView *)pageView;
- (void)remove;
- (struct CGPoint { float x1; float x2; })selectedPointFor:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })selectionRectangle;
- (void)setPageView:(UIPDFPageView *)arg1;
- (void)setSelectedGrabber:(unsigned int)arg1;
- (void)setSelection:(UIPDFSelection *)arg1;
- (void)track:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })viewOffset;

@end

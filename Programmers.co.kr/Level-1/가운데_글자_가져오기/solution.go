func solution(s string) string {
	return s[int(float64(len(s))/2-0.5):int(float64(len(s))/2+1)]
}
